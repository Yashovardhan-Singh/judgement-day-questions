# Maximum Roman Substring

You are given a string `s` consisting only of the characters `I`, `V`, `X`, `L`, `C`, `D`, and `M`.

Each character has the following value:

| Symbol | Value |
| ------ | ----- |
| `I`    | 1     |
| `V`    | 5     |
| `X`    | 10    |
| `L`    | 50    |
| `C`    | 100   |
| `D`    | 500   |
| `M`    | 1000  |

## Substring Value

For any **non-empty contiguous substring** `t` of `s`, its value is calculated using the following rule.

Let the substring be:

```text
t = t[0] t[1] ... t[k-1]
```

where `k >= 1`.

For every position `i` such that `0 <= i < k-1`:

* If `value(t[i]) < value(t[i+1])`, contribute `-value(t[i])`.
* Otherwise, contribute `+value(t[i])`.

The final character `t[k-1]` always contributes `+value(t[k-1])`.

Thus,

```text
value(t) =
    sum of the signed values of t[0..k-2]
    + value(t[k-1])
```

The comparison is **always between adjacent characters inside the substring**.

In particular, a character is compared only with the character immediately to its right. No standard Roman-numeral parsing rules are used.

For example:

```text
IV   = -1 + 5 = 4
VI   =  5 + 1 = 6
IX   = -1 + 10 = 9
MCM  = 1000 - 100 + 1000 = 1900
```

A substring of length `1` consists of a single character, so its value is simply that character's value:

```text
I = 1
V = 5
X = 10
L = 50
C = 100
D = 500
M = 1000
```

## Task

Find the **maximum value** among all non-empty contiguous substrings of `s`.

The substring may be the entire string or any proper substring of it.

For example, for:

```text
s = IV
```

the possible non-empty substrings are:

```text
I  -> 1
V  -> 5
IV -> 4
```

Therefore, the answer is:

```text
5
```

## Input

The input consists of a single line containing the string `s`.

## Output

Print a single integer representing the maximum value among all non-empty contiguous substrings of `s`.

## Constraints

* `1 <= |s| <= 10^5`
* `s` contains only the characters `I`, `V`, `X`, `L`, `C`, `D`, and `M`.
* The answer fits in a signed 64-bit integer.

## Examples

### Example 1

**Input**

```text
III
```

**Output**

```text
3
```

### Example 2

**Input**

```text
MCMXCIV
```

**Output**

```text
1994
```

### Example 3

**Input**

```text
IV
```

**Output**

```text
5
```
