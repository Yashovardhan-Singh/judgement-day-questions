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

    long long bestEnding = value(s[0]);
    long long answer = bestEnding;

    for (int i = 1; i < (int)s.size(); ++i) {
        long long prev = value(s[i - 1]);
        long long curr = value(s[i]);
        long long contribution = (prev < curr) ? -prev : prev;
        bestEnding = max(curr, bestEnding - prev + contribution + curr);

        answer = max(answer, bestEnding);
    }

    cout << answer << '\n';

    return 0;
}
