#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    vector<int> ratings(n);
    for (int i = 0; i < n; i++) {
        cin >> ratings[i];
    }

    vector<long long> candies(n, 1);

    // Left-to-right pass
    for (int i = 1; i < n; i++) {
        if (ratings[i] > ratings[i - 1]) {
            candies[i] = candies[i - 1] + 1;
        }
    }

    // Right-to-left pass
    for (int i = n - 2; i >= 0; i--) {
        if (ratings[i] > ratings[i + 1]) {
            candies[i] = max(candies[i], candies[i + 1] + 1);
        }
    }

    long long total_candies = 0;
    for (int i = 0; i < n; i++) {
        total_candies += candies[i];
    }

    cout << total_candies << "\n";

    return 0;
}
