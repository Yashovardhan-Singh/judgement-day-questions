#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<pair<int, int>> satellites(n);

    for (int i = 0; i < n; i++) {
        cin >> satellites[i].first >> satellites[i].second;
    }

    if (n <= 2) {
        cout << n << '\n';
        return 0;
    }

    int ans = 1;

    for (int i = 0; i < n; i++) {
        map<pair<int, int>, int> slopes;
        int maxCount = 0;

        for (int j = i + 1; j < n; j++) {
            int dy = satellites[j].second - satellites[i].second;
            int dx = satellites[j].first - satellites[i].first;

            int g = gcd(abs(dy), abs(dx));

            dy /= g;
            dx /= g;

            if (dx < 0) {
                dy = -dy;
                dx = -dx;
            }

            if (dx == 0)
                dy = 1;

            slopes[{dy, dx}]++;

            maxCount = max(maxCount, slopes[{dy, dx}]);
        }

        ans = max(ans, maxCount + 1);
    }

    cout << ans << '\n';

    return 0;
}
