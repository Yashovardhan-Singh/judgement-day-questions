pub fn slowest_filling_container(height: Vec<i32>) -> i64 {
    let n = height.len();
    let funnel = (n - 1) / 2;

    let mut left = 0usize;
    let mut right = n - 1;
    let mut answer = 0i64;

    while left < right {
        let width = (right - left) as i64;
        let min_height = height[left].min(height[right]) as i64;

        let capacity = min_height * width;

        let left_distance = (left as i64 - funnel as i64).abs();
        let right_distance = (right as i64 - funnel as i64).abs();

        let gravity_distance = left_distance.max(right_distance);

        let time = capacity * (1 + gravity_distance);

        answer = answer.max(time);

        if height[left] < height[right] {
            left += 1;
        } else {
            right -= 1;
        }
    }

    answer
}
