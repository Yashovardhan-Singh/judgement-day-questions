//Author: CelestialRex
#include <bits/stdc++.h>

using namespace std;

using ll = long long;

bool distDigit(int x) {
    string s=to_string(x);
    return (s[0]!=s[1])&&(s[0]!=s[2])&&(s[0]!=s[3])&&(s[1]!=s[2])&&(s[1]!=s[3])&&(s[2]!=s[3]);
}

void solve() {
    int y;
    cin >> y;
    do{
        ++y;
    }while(!distDigit(y));
    cout<<y<<'\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // int t;
    // cin>>t;
    // while (t--)
        solve();
    return 0;
}
