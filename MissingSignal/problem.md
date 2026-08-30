# Missing Signal

You are given the IDs of `n` signals recorded by a monitoring system. The valid signal IDs range from `0` to `n`.

Exactly **one signal ID is missing**, while every other ID appears exactly once.

Return the missing signal ID.

Your solution should run in `O(n)` time and use `O(1)` extra space.

## Example 1

```text
Input: n = 5, signals = [3,0,1,5,4]
Output: 2
```

## Example 2

```text
Input: n = 4, signals = [0,1,2,4]
Output: 3
```

## Example 3

```text
Input: n = 1, signals = [0]
Output: 1
```

## Constraints

- `1 <= n <= 100000`
- `0 <= signals[i] <= n`
- All signal IDs are distinct.

## Input Format

The first line contains an integer `n`.

The second line contains `n` space-separated integers representing the recorded signal IDs.

## Output Format

Print the missing signal ID.

## Inspiration

Inspired by **LeetCode 268 — Missing Number**.

Original problem:
https://leetcode.com/problems/missing-number/

The setting, wording, examples, and presentation have been changed for this problem.
