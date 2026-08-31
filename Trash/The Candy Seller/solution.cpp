#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    long long t;
    if (!(cin >> n >> t)) return 0;

    vector<long long> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    unordered_map<long long, int> mp;
    for (int i = 0; i < n; i++) {
        long long comp = t - nums[i];
        if (mp.find(comp) != mp.end()) {
            cout << mp[comp] + 1 << " " << i + 1 << "\n";
            return 0;
        }
        mp[nums[i]] = i;
    }

    return 0;
}
