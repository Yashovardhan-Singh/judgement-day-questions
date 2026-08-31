# Balanced Log Segment

A server records every request as either a success or a failure:

- `1` represents a successful request.
- `0` represents a failed request.

A continuous portion of the log is called **balanced** if it contains exactly the same number of successful and failed requests.

Given the complete log, find the **maximum length of a balanced continuous segment**.

## Example 1

```text
Input: n = 8, log = [1,1,0,1,0,0,1,0]
Output: 8
```

The complete log contains four `1`s and four `0`s, so the entire segment is balanced.

## Example 2

```text
Input: n = 7, log = [1,1,1,0,0,1,0]
Output: 4
```

One longest balanced segment is `[1,1,0,0]`.

## Example 3

```text
Input: n = 5, log = [1,1,1,1,0]
Output: 2
```

## Constraints

- `1 <= n <= 200000`
- `log[i]` is either `0` or `1`.

## Input Format

The first line contains an integer `n`.

The second line contains `n` space-separated integers representing the server log.

## Output Format

Print the maximum length of a balanced continuous segment.
