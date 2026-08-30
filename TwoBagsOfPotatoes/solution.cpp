//Author: CelestialRex
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int y,k,n;
    cin>>y>>k>>n;
    set<int> s;
    for (int i=k;i<=n;i+=k)
        if (i>y)
            s.insert(i-y);
    if (s.size()>0)
        for (auto &i:s)
            cout<<i<<" ";
    else
        cout<<-1;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
