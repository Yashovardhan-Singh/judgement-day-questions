# Problem Statement

At MIT Manipal, the Student Council is organizing a grand treat at the Student Plaza to appreciate students after mid-semester exams. There are `n` students standing in a line, each assigned a performance rating based on their academic and extra-curricular achievements.

The council wants to distribute candies to all `n` students subject to the following conditions:
1. Each student must receive at least 1 candy.
2. Any student with a strictly higher rating than their immediate neighbor (left or right) must receive strictly more candies than that neighbor.

Help the Student Council calculate the minimum total number of candies required to satisfy these rules.

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
