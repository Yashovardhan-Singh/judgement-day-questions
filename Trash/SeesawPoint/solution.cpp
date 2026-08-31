#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    if (!(cin >> n)) return 0;
    vector<long long> a(n);
    long long total = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        total += a[i];
    }

    long long leftSum = 0;
    int answer = -1;
    for (int i = 0; i < n; i++) {
        long long rightSum = total - leftSum - a[i];
        if (leftSum == rightSum) {
            answer = i;
            break;
        }
        leftSum += a[i];
    }

    cout << answer << "\n";
    return 0;
}
