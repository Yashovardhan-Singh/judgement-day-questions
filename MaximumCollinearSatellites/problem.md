# Maximum Collinear Satellites

You are given the coordinates of `n` satellites on a two-dimensional plane. Each satellite is represented by `satellites[i] = [xi, yi]`.

A communication beam can pass through multiple satellites if all of them lie on the same straight line.

Return the **maximum number of satellites that can be aligned along a single beam**.

### Example 1

```text
Input: satellites = [[-2,3],[0,0],[2,-3],[4,-6],[1,5]]
Output: 4
```

### Example 2

```text
Input: satellites = [[0,4],[2,1],[-1,2],[3,5],[5,-1],[4,2]]
Output: 3
```

### Example 3

```text
Input: satellites = [[-3,-2],[-1,1],[1,4],[2,-1],[4,5],[6,8]]
Output: 3
```

### Constraints

* `1 <= satellites.length <= 300`
* `satellites[i].length == 2`
* `-10^4 <= xi, yi <= 10^4`
* All satellite coordinates are unique.
