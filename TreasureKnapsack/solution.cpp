#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    long long w;
    if (!(cin >> n >> w)) return 0;

    vector<long long> weight(n), value(n);
    for (int i = 0; i < n; i++) {
        cin >> weight[i] >> value[i];
    }

    vector<long long> dp(w + 1, 0);
    for (int i = 0; i < n; i++) {
        for (long long cap = w; cap >= weight[i]; cap--) {
            dp[cap] = max(dp[cap], dp[cap - weight[i]] + value[i]);
        }
    }

    cout << dp[w] << "\n";
    return 0;
}
