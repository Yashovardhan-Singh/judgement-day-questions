import os
import sys
import subprocess
import tempfile


def main():
    if len(sys.argv) != 3:
        print("Usage: python3 check.py solution.cpp testcase_folder")
        sys.exit(1)

    solution = sys.argv[1]
    folder = sys.argv[2]

    if not os.path.isfile(solution):
        print(f"Error: solution file not found: {solution}")
        sys.exit(1)

    if not os.path.isdir(folder):
        print(f"Error: testcase folder not found: {folder}")
        sys.exit(1)

    input_folder = os.path.join(folder, "input")
    output_folder = os.path.join(folder, "output")

    if not os.path.isdir(input_folder):
        print(f"Error: input folder not found: {input_folder}")
        sys.exit(1)

    if not os.path.isdir(output_folder):
        print(f"Error: output folder not found: {output_folder}")
        sys.exit(1)

    with tempfile.NamedTemporaryFile(delete=False) as f:
        executable = f.name

    # Compile solution.cpp
    compile_result = subprocess.run(
        ["g++", "-std=c++17", "-O2", "-pipe", solution, "-o", executable],
        capture_output=True,
        text=True
    )

    if compile_result.returncode != 0:
        print("COMPILATION FAILED")
        print(compile_result.stderr)
        os.unlink(executable)
        sys.exit(1)

    inputs = sorted(
        f for f in os.listdir(input_folder)
        if f.startswith("input") and f.endswith(".txt")
    )

    if not inputs:
        print("No inputXX.txt files found in input folder.")
        os.unlink(executable)
        sys.exit(1)

    passed = 0
    failed = 0

    for input_file in inputs:
        suffix = input_file[5:-4]
        output_file = f"output{suffix}.txt"

        input_path = os.path.join(input_folder, input_file)
        output_path = os.path.join(output_folder, output_file)

        if not os.path.isfile(output_path):
            print(f"[MISSING] {output_file}")
            failed += 1
            continue

        with open(input_path, "r") as f:
            test_input = f.read()

        with open(output_path, "r") as f:
            expected = f.read().strip()

        try:
            result = subprocess.run(
                [executable],
                input=test_input,
                capture_output=True,
                text=True,
                timeout=5
            )
        except subprocess.TimeoutExpired:
            print(f"[TIMEOUT] {input_file}")
            failed += 1
            continue

        if result.returncode != 0:
            print(f"[RUNTIME ERROR] {input_file}")
            print(result.stderr.strip())
            failed += 1
            continue

        actual = result.stdout.strip()

        if actual == expected:
            print(f"[PASS] {input_file}")
            passed += 1
        else:
            print(f"[FAIL] {input_file}")
            print(f"  Expected: {expected}")
            print(f"  Got:      {actual}")
            failed += 1

    os.unlink(executable)

    print("\n------------------------------")
    print(f"Passed: {passed}")
    print(f"Failed: {failed}")
    print(f"Total:  {passed + failed}")
    print("------------------------------")

    sys.exit(0 if failed == 0 else 1)


if __name__ == "__main__":
    main()
