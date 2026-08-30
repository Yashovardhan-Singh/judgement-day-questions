#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    auto value = [](char c) -> long long {
        switch (c) {
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
        }
        return 0;
    };

    long long ans = LLONG_MIN;
    long long current = 0;

    for (int i = 0; i < (int)s.size(); ++i) {
        long long contribution;

        if (i == 0) {
            contribution = value(s[i]);
        } else {
            contribution = (value(s[i - 1]) < value(s[i]))
                         ? -value(s[i - 1])
                         : value(s[i - 1]);
        }

        // Best value of a substring ending at i.
        current = max(value(s[i]), current + contribution);

        ans = max(ans, current);
    }

    cout << ans << '\n';

    return 0;
}
