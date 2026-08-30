# Laptop Recommendation

Kush wants to buy a new laptop. However, he is confused about which laptop to buy out of 10 different laptops. He asks his N friends for their recommendation. The i-th friend recommends Kush to buy the A_i laptop (1 ≤ A_i ≤ 10).

Kush will buy the laptop which is recommended by maximum number of friends. Determine which laptop Kush buys.

Print `CONFUSED` if there are multiple laptops having maximum number of recommendations.

## Input Format

- The first line contains a single integer T - the number of test cases. Then the test cases follow.
- The first line of each test case contains an integer N - the number of Kush's friends.
- The second line of each test case contains N space-separated integers A_1, A_2, …, A_N where A_i denotes the recommendation of the i-th friend.

## Output Format

For each test case, output in a single line, the laptop which has the maximum number of recommendations. Print `CONFUSED` if there are multiple laptops having maximum number of recommendations.

You may print each character of `CONFUSED` in uppercase or lowercase (for example, `Confused`, `coNFused`, `CONFused` will be considered identical).

## Constraints

- 1 ≤ T ≤ 200
- 1 ≤ N ≤ 1000
- 1 ≤ A_i ≤ 10
