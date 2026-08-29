# Problem Statement

MoEngage has `N` piles of cards, numbered from `1` to `N`.

Each pile contains several cards, and every card has an integer written on it.

MoEngage wants to choose **exactly one card from every pile**.

The chosen cards must be considered in the **same order as their piles**. That is, a card chosen from pile `i` always comes before a card chosen from pile `i+1`.

Your task is to determine the **maximum possible length of a consecutive sequence** among the cards chosen from the piles.

# Input Format

The first line contains an integer `T`, the number of test cases.

For each test case:

- The first line contains an integer `N`, the number of piles.
- The next `N` lines describe the piles.

The `i`-th line starts with an integer `Kᵢ`, denoting the number of cards in pile `i`.

This is followed by `Kᵢ` space-separated integers representing the numbers written on the cards in that pile.

# Output Format

For each test case, print a single integer — the maximum possible length of a consecutive sequence that can be formed from the cards chosen from consecutive piles.

# Constraints

- `1 ≤ T ≤ 100`
- `1 ≤ N ≤ 1000`
- `1 ≤ Kᵢ ≤ 100`
- `1 ≤ card value ≤ 10^5`
- The total number of cards across all piles in a test case does not exceed `10^5`.

# Examples
**Input 0**
```
1
3
2 5 7
3 6 2 9
2 7 3
```
**Output 0**
```
3
```
**Input 1**
```
1
5
1 10
2 11 20
2 12 5
3 1 2 13
3 100 8 14
```
**Output 1**
```
5
```

## Note

A consecutive sequence does **not** need to start at the first pile or end at the last pile.

MoEngage must still choose exactly one card from every pile, but cards outside the consecutive sequence do not contribute to its length.