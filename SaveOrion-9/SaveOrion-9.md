# SaveOrion-9

**Difficulty:** Easy

## Problem Statement

Deep space outpost Orion-9 intercepted $N$ encrypted numeric transmissions from an unknown galaxy. Interstellar security protocol states that a signal pulse is considered authentic if it possesses **odd parity**—that is, if the number of set bits ($1$'s) in its binary representation is an odd count.

Count how many transmitted signals carry odd parity to determine how many authentic pulses were received.

If the count is too low, Orion-9 may be facing a mayday situation!

## Input

The first line contains a single integer $N$ ($1 \le N \le 10^5$), representing the number of intercepted signal pulses.

The second line contains $N$ space-separated integers $A_1, A_2, \dots, A_N$ ($0 \le A_i \le 10^9$).

## Output

Print a single integer representing the number of signals with odd binary parity.

## Samples

### Sample 0

**Input**
```text
4
3 5 7 8
```
**Output**
```text
2
