#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> height(n);
    for (int i = 0; i < n; i++) {
        cin >> height[i];
    }

    int funnel = (n - 1) / 2;

    int left = 0;
    int right = n - 1;
    long long answer = 0;

    while (left < right) {
        long long width = right - left;
        long long min_height = min(height[left], height[right]);

        long long capacity = min_height * width;

        long long left_distance = abs(left - funnel);
        long long right_distance = abs(right - funnel);

        long long gravity_distance = max(left_distance, right_distance);

        long long time = capacity * (1 + gravity_distance);

        answer = max(answer, time);

        if (height[left] < height[right]) {
            left++;
        } else {
            right--;
        }
    }

    cout << answer << '\n';

    return 0;
}
