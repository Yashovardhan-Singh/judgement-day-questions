#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    if (!(cin >> s)) return 0;

    int lastSeen[26];
    fill(begin(lastSeen), end(lastSeen), -1);

    int best = 0;
    int left = 0;
    for (int right = 0; right < (int)s.size(); right++) {
        int c = s[right] - 'a';
        if (lastSeen[c] >= left) {
            left = lastSeen[c] + 1;
        }
        lastSeen[c] = right;
        best = max(best, right - left + 1);
    }

    cout << best << "\n";
    return 0;
}
