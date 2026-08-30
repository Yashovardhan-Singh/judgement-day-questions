
# The Slowest-Filling Container

A machine pours sand through a funnel positioned above a row of vertical walls.

The walls are represented by an integer array `height`, where `height[i]` is the height of the wall at position `i`.

Choose two walls at positions `i` and `j` (`i < j`) to form a container.

The amount of sand required to fill the container is:

`min(height[i], height[j]) * (j - i)`

The funnel is positioned above position:

`floor((n - 1) / 2)`

For a container formed by walls at positions `i` and `j`, define its **gravity distance** as the larger of the two walls' distances from the funnel:

`max(|i - funnel|, |j - funnel|)`

The filling time of the container is:

`amount of sand * (1 + gravity distance)`

Find the maximum filling time among all possible containers.

## Input

The first line contains an integer `n`, the number of walls.

The second line contains `n` space-separated integers representing the array `height`.

## Output

Return the maximum filling time among all possible pairs of walls.

## Constraints

* `2 <= height.length <= 10^5`
* `0 <= height[i] <= 10^4`
* The answer fits in a signed 64-bit integer.

## Examples

### Example 1

**Input**

```text
[1, 8, 6, 2, 5, 4, 8, 3, 7]
```

**Output**

```text
245
```

### Example 2

**Input**

```text
[1, 1]
```

**Output**

```text
2
```
