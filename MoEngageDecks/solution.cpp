#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

const int MAXV = 100005;
int dpPrev[MAXV];
int dpCurr[MAXV];

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        int N;
        scanf("%d", &N);
        vector<int> prevTouched;
        int ans = 1;

        for (int i = 0; i < N; i++) {
            int K;
            scanf("%d", &K);
            vector<int> vals(K);
            for (auto &x : vals) scanf("%d", &x);

            vector<int> currTouched;
            currTouched.reserve(K);
            int bestThis = 0;

            for (int v : vals) {
                int len = 1;
                if (v - 1 >= 0 && dpPrev[v - 1] > 0) {
                    len = dpPrev[v - 1] + 1;
                }
                if (len > dpCurr[v]) {
                    if (dpCurr[v] == 0) currTouched.push_back(v);
                    dpCurr[v] = len;
                }
                bestThis = max(bestThis, dpCurr[v]);
            }
            ans = max(ans, bestThis);

            for (int idx : prevTouched) dpPrev[idx] = 0;
            for (int idx : currTouched) {
                dpPrev[idx] = dpCurr[idx];
                dpCurr[idx] = 0;
            }
            prevTouched = move(currTouched);
        }
        for (int idx : prevTouched) dpPrev[idx] = 0;
        printf("%d\n", ans);
    }
    return 0;
}