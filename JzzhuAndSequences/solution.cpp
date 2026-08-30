//Author: CelestialRex
#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
const ll mod = 1e9+7;
 
void solve() {
    ll x,y,n;
    cin>>x>>y;
    cin>>n;
    ll a[6] = {x-y,x,y,y-x,-x,-y};
    ll ans = a[n%6];
    while (ans<0)
        ans += mod;
    cout<<ans%mod;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
