# Problem Statement

There is a hidden word `S` and a guess word `A`. Both words contain exactly **5 lowercase English letters**.

You need to generate a result string `M` to describe how correct the guess is.

For every position `i`, set `M[i]` as:

- `G` — if `A[i]` is the same as `S[i]`.
- `Y` — if `A[i]` is different from `S[i]`, but the character `A[i]` occurs somewhere else in `S`.
- `B` — if there is no unused occurrence of `A[i]` in `S`.

### Important Rule for Repeated Characters

Each character in the hidden word `S` can be matched **at most once**.

Exact matches (`G`) are given priority over `Y` matches.

For example, if a character occurs only once in `S` and is already used for a `G` match, it cannot be used again to produce a `Y`.

For each test case, determine the result string `M`.

# Input Format

The first line contains an integer `T`, the number of test cases.

Each test case contains:

- One line containing the hidden word `S`.
- One line containing the guess word `A`.

Both `S` and `A` contain exactly 5 lowercase English letters.

# Output Format

For each test case, print a string `M` of length 5.

For every position:

- `G` means the character is correct and in the correct position.
- `Y` means the character exists in the hidden word but is in the wrong position.
- `B` means there is no unused matching character in the hidden word.

# Constraints

- `1 ≤ T ≤ 10`
- `|S| = |A| = 5`
- `S` and `A` contain only lowercase English letters.

# Examples
**Input**
```
2
apple
alley
hello
world
```
**Output**
```
GYBYB
BYBGB
```