# Treasure Knapsack

**Difficulty:** Hard
**Topics:** Dynamic Programming, 0/1 Knapsack

## Problem Statement

Amara has discovered an old shipwreck with `N` pieces of treasure scattered
across the seabed. The `i`-th piece has a weight `w[i]` and a value `v[i]`.
She has a single knapsack that can carry a total weight of at most `W`, and
for each piece of treasure she must decide whether to take it whole or leave
it behind — treasure cannot be broken into pieces, and each piece can be
taken at most once.

Help Amara choose which pieces to take so that the total weight does not
exceed `W` and the total value collected is as large as possible.

## Input Format

- The first line contains two space-separated integers `N` and `W`: the
  number of treasure pieces and the knapsack's maximum weight capacity.
- Each of the next `N` lines contains two space-separated integers `w[i]`
  and `v[i]`: the weight and value of the `i`-th piece of treasure.

## Output Format

Print a single integer: the maximum total value Amara can carry without
exceeding weight `W`.

## Constraints

```
1 <= N <= 1000
1 <= W <= 2000
1 <= w[i] <= 2000
1 <= v[i] <= 10^4
```

## Sample Input 0

```
4 7
1 1
3 4
4 5
5 7
```

## Sample Output 0

```
9
```

### Explanation 0

Taking the treasures with weight `3` (value `4`) and weight `4` (value `5`)
uses `3 + 4 = 7` of the capacity and gives a total value of `4 + 5 = 9`,
which is the best possible.

## Sample Input 1

```
3 50
10 60
20 100
30 120
```

## Sample Output 1

```
220
```

### Explanation 1

Taking the treasures with weight `20` (value `100`) and weight `30` (value
`120`) uses all `50` of the capacity and gives a total value of `220`,
which is better than any other combination.
