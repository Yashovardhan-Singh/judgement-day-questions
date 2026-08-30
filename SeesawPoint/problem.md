# Seesaw Point

**Difficulty:** Easy
**Topics:** Arrays, Prefix Sums

## Problem Statement

Ravi has `N` stones lined up in a row, each with its own weight, and wants to
balance them on a seesaw. He can place a single pivot under exactly one
stone. The seesaw balances at that stone if the total weight of every stone
strictly to its left equals the total weight of every stone strictly to its
right.

Given the weights of the stones, find the **leftmost** index at which the
seesaw balances. If no such index exists, report that it is impossible.

Formally, given an array `A` of `N` integers (0-indexed), find the smallest
index `i` (`0 <= i < N`) such that:

```
A[0] + A[1] + ... + A[i-1]  ==  A[i+1] + A[i+2] + ... + A[N-1]
```

If `i = 0`, the left sum is considered `0` (empty sum). Likewise if
`i = N-1`, the right sum is considered `0`.

## Input Format

- The first line contains a single integer `N`, the number of stones.
- The second line contains `N` space-separated integers `A[0], A[1], ..., A[N-1]`,
  the weights of the stones.

## Output Format

Print a single integer: the leftmost balance index (0-indexed), or `-1` if
no balance index exists.

## Constraints

```
1 <= N <= 10^5
-10^4 <= A[i] <= 10^4
```

## Sample Input 0

```
6
1 7 3 6 5 6
```

## Sample Output 0

```
3
```

### Explanation 0

At index `3` (value `6`), the left sum is `1 + 7 + 3 = 11` and the right sum
is `5 + 6 = 11`. They are equal, and no earlier index works, so `3` is the
answer.

## Sample Input 1

```
4
1 2 3 4
```

## Sample Output 1

```
-1
```

### Explanation 1

No index in the array makes the left and right sums equal, so the answer is
`-1`.
