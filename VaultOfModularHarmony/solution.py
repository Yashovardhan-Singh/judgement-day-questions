import sys

def main():
    input_data = sys.stdin.read().split()
    if not input_data:
        return
    
    n = int(input_data[0])
    k = int(input_data[1])
    arr = [int(x) for x in input_data[2:n+2]]

    first_occ = {0: -1}
    current_sum = 0
    max_len = 0

    for i, val in enumerate(arr):
        current_sum += val
        rem = current_sum % k

        if rem in first_occ:
            max_len = max(max_len, i - first_occ[rem])
        else:
            first_occ[rem] = i

    print(max_len)

if __name__ == "__main__":
    main()
