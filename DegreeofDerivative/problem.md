# Problem Statement

In mathematics, the degree of polynomials in one variable is the highest power of the variable in the algebraic expression with non-zero coefficient.

You are given a polynomial in one variable `x` with `N` terms.

The polynomial is:

`A₀·x⁰ + A₁·x¹ + A₂·x² + ... + Aₙ₋₁·xⁿ⁻¹`

where `Aᵢ` is the coefficient of `xⁱ`.

You then differentiate the polynomial once with respect to `x`.

Your task is to find the **degree of the resulting polynomial**.

## Input Format

The first line contains an integer `T`, the number of test cases.

For each test case:

- The first line contains an integer `N`, the number of terms in the polynomial.
- The second line contains `N` space-separated integers `A₀, A₁, ..., Aₙ₋₁`, where `Aᵢ` is the coefficient of `xⁱ`.

## Output Format

For each test case, print the degree of the polynomial obtained after differentiating the given polynomial once.

If the derivative is the zero polynomial, print `-1`.

## Constraints

- `1 ≤ T ≤ 100`
- `1 ≤ N ≤ 1000`
- `-1000 ≤ Aᵢ ≤ 1000`
- At least one coefficient in the original polynomial is non-zero.

## Examples
**Input 0**
```
1
6
2 5 0 7 0 0
```
**Output 0**
```
2
```
**Input 1**
```
2
4
1 2 3 4
3
5 0 0
```
**Output 1**
```
2
-1
```