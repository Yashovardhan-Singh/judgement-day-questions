# Vault of Modular Harmony

**Difficulty:** Medium

## Problem Statement

Inside an ancient temple lies a row of $N$ elemental energy crystals, each calibrated with a positive or negative charge rating. To unlock the temple vault, you must activate a contiguous sequence of crystals.

The vault mechanism will only trigger if the total sum of the energy ratings of the chosen contiguous sequence is exactly divisible by the temple's resonance frequency $K$. Find the length of the longest contiguous sequence of crystals that can safely unlock the vault. If no valid sequence exists, print `0`.

## Input

The first line contains two space-separated integers $N$ ($1 \le N \le 2 \times 10^5$) and $K$ ($1 \le K \le 10^9$).

The second line contains $N$ space-separated integers $A_1, A_2, \dots, A_N$ ($-10^9 \le A_i \le 10^9$) representing the energy ratings.

## Output

Print a single integer representing the maximum length of a valid contiguous sequence.

## Samples

### Sample 0

**Input**
```text
6 5
2 7 6 1 4 5
```
**Output**
```text
6
