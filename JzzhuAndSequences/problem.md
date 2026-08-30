# 450B — Jzzhu and Sequences

**Difficulty:** Hard

## Problem Statement

A sequence is defined by f1 = x, f2 = y, and for every i > 2:

    fi = f(i-1) + f(i+1)

Given x, y and n, compute fn modulo 1000000007.

## Input

The first line contains x and y (|x|, |y| ≤ 10^9). The second line contains n (1 ≤ n ≤ 2·10^9).

## Output

Print fn modulo 1000000007.

## Samples

### Sample 0

**Input**
```text
2 3
3
```

**Output**
```text
1
```

### Sample 1

**Input**
```text
0 -1
2
```

**Output**
```text
1000000006
```

