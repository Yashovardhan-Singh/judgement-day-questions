# Multiverse Streams

**Difficulty:** Hard

## Problem Statement

Following a catastrophic fracture in space-time, event records from $K$ distinct parallel timelines were scattered across the cosmic archive. Each timeline's records have been independently sorted in non-decreasing order by their timestamp IDs.

To repair the central continuum, merge all $K$ sorted streams into a single unified timeline, fully sorted by timestamp IDs in non-decreasing order.

## Input

The first line contains a single integer $K$ ($0 \le K \le 10^4$), representing the number of timeline streams.

The next $K$ lines each represent a stream. Each line starts with an integer $N_i$ ($0 \le N_i \le 500$, total elements across all streams $\le 10^5$), followed by $N_i$ space-separated sorted integers ($-10^9 \le \text{element} \le 10^9$).

## Output

Print a single line containing all elements from all $K$ streams merged together in non-decreasing order, separated by spaces. If all streams are empty, print nothing.

## Samples

### Sample 0

**Input**
```text
3
3 1 4 5
3 1 3 4
2 2 6
```
**Output**
```text
1 1 2 3 4 4 5 6
