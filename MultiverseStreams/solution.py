import sys
import heapq

def main():
    input_data = sys.stdin.read().split()
    if not input_data:
        return

    idx = 0
    k = int(input_data[idx])
    idx += 1

    pq = []
    lists = []
    for i in range(k):
        length = int(input_data[idx])
        idx += 1
        lst = [int(x) for x in input_data[idx : idx + length]]
        idx += length
        lists.append(lst)
        if lst:
            heapq.heappush(pq, (lst[0], i, 0))

    result = []
    while pq:
        val, l_idx, e_idx = heapq.heappop(pq)
        result.append(str(val))
        if e_idx + 1 < len(lists[l_idx]):
            heapq.heappush(pq, (lists[l_idx][e_idx + 1], l_idx, e_idx + 1))

    print(" ".join(result))

if __name__ == "__main__":
    main()
