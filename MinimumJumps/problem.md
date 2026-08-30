# Minimum Jumps to the Finish

You are moving through a line of `n` checkpoints numbered from `0` to `n-1`.

At checkpoint `i`, `a[i]` tells you the **maximum number of checkpoints forward** you can move in a single jump.

From checkpoint `i`, you may jump to any checkpoint `j` satisfying:

```text
i < j <= i + a[i]
```

Find the **minimum number of jumps** required to reach checkpoint `n-1`.

If the final checkpoint cannot be reached, print `-1`.

## Example 1

```text
Input: n = 5, a = [2,3,1,1,1]
Output: 2
```

One optimal route is:

```text
0 -> 1 -> 4
```

## Example 2

```text
Input: n = 6, a = [2,2,1,0,1,1]
Output: -1
```

Checkpoint `3` cannot move forward, and no earlier jump can bypass the blocked section.

## Example 3

```text
Input: n = 7, a = [3,2,1,2,1,1,1]
Output: 3
```

One optimal route is:

```text
0 -> 3 -> 5 -> 6
```

## Constraints

- `2 <= n <= 100000`
- `0 <= a[i] <= 100000`

## Input Format

The first line contains an integer `n`.

The second line contains `n` space-separated integers representing the maximum jump distance from each checkpoint.

## Output Format

Print the minimum number of jumps needed to reach checkpoint `n-1`.

Print `-1` if the destination is unreachable.
