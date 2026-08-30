#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        long long n, x, y, z;
        cin >> n >> x >> y >> z;

        long long a = (n + (x + y) - 1) / (x + y);

        long long b;
        long long h = (n + x - 1) / x;
        if (h <= z) {
            b = h;
        } else {
            long long r = n - x * z;
            long long s = x + 10 * y;
            long long d = (r + s - 1) / s;
            b = z + d;
        }

        cout << min(a, b) << "\n";
    }
    return 0;
}
