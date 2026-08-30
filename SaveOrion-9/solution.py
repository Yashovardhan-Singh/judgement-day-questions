import sys

def main():
    input_data = sys.stdin.read().split()
    if not input_data:
        return
    
    n = int(input_data[0])
    arr = [int(x) for x in input_data[1:n+1]]

    odd_parity_count = 0
    for val in arr:
        if bin(val).count('1') % 2 != 0:
            odd_parity_count += 1

    print(odd_parity_count)

if __name__ == "__main__":
    main()
