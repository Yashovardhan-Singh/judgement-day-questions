# Problem Statement

Kit is a friendly senior that you meet in MIT. He likes giving candies to freshers.
He tasked you to solve a puzzle related to candy distribution. If your successful he promised to give you *"special"*  candies which only he can give. You being exicted about your friendly senior and out of respect decided to take on this challenge and prove yourself.

The problem is as follows:

He wants to distribute candies to `n` students standing in a line, each assigned a rank based on their MET scorecard.
He wants to distribute candies to all `n` students subject to the following conditions:
1. Each student must receive at least 1 candy.
2. Any student with a strictly higher rating than their immediate neighbor (left or right) must receive strictly more candies than that neighbor.

Help Kit calculate the minimum total number of candies required to satisfy these rules so that you can get the *"special candy"* from him.
# Input Format

- The first line contains an integer `n` representing the number of students.
- The second line contains `n` space-separated integers representing the ratings of the students.

# Constraints

- `1 <= n <= 3 * 10^4`
- `0 <= ratings[i] <= 2 * 10^4`

# Output

Print a single integer representing the minimum total number of candies required.

# Examples

### Input 0

```
3
1 0 2
```

### Output 0

```
5
```

*Explanation: The candies allocated are [2, 1, 2].*

### Input 1

```
3
1 2 2
```

### Output 1

```
4
```

*Explanation: The candies allocated are [1, 2, 1]. Note that the 3rd student gets 1 candy because their rating is equal to (not strictly greater than) their neighbor's rating.*
