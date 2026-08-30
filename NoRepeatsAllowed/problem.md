# No Repeats Allowed

**Difficulty:** Medium
**Topics:** Strings, Sliding Window, Two Pointers

## Problem Statement

Priya is typing a long string on a keyboard that jams whenever the same
character appears twice within the text currently on screen. She wants to
know the length of the longest stretch of consecutive characters she can
type before the keyboard would jam, i.e., the length of the **longest
contiguous substring with no repeated characters**.

Given a string `s` consisting only of lowercase English letters (`a`-`z`),
find the length of the longest substring of `s` that does not contain any
character more than once.

## Input Format

- A single line containing the string `s`.

## Output Format

Print a single integer: the length of the longest substring of `s` with all
distinct characters.

## Constraints

```
1 <= |s| <= 10^5
s consists only of lowercase English letters ('a' - 'z')
```

## Sample Input 0

```
abcabcbb
```

## Sample Output 0

```
3
```

### Explanation 0

The answer is `"abc"`, with length `3`. Note that `"bca"` and `"cab"` are
also valid answers of the same length, but no longer substring without
repeats exists.

## Sample Input 1

```
bbbbb
```

## Sample Output 1

```
1
```

### Explanation 1

The answer is `"b"`, with length `1`, since every character is the same.

## Sample Input 2

```
pwwkew
```

## Sample Output 2

```
3
```

### Explanation 2

The answer is `"wke"`, with length `3`. Note that `"pwke"` is not a valid
substring because it is not contiguous (it skips a repeated `w`).
