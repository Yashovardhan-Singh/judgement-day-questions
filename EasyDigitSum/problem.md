# Easy Digit Sum 

For a positive integer k, define d(k) as the sum of the digits of k. Thus d(42) = 4 + 2 = 6.

For a positive integer n, define S(n) as the number of positive integers k < 10^n with the following properties:

- k is divisible by 23, and
- d(k) = 23.

Kush is given that S(9) = 263626 and S(42) = 6377168878570056.

Given several values of n, compute S(n) mod 10^9.

## Input Format

- The first line contains a single integer T — the number of test cases.
- Each of the next T lines contains a single integer n.

## Output Format

For each test case, output a single line containing S(n) mod 10^9.

## Constraints

- 1 ≤ T ≤ 20
- 1 ≤ n ≤ 2000

## Sample Input

```
2
9
42
```

## Sample Output

```
263626
878570056
```

Note: S(42) itself equals 6377168878570056; the sample output shows it reduced mod 10^9, since that's what you should print.
