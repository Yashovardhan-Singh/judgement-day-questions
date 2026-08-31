#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        string S, A;
        cin >> S >> A;
        string M(5, 'B');
        int freq[26] = {};

        for (int i = 0; i < 5; i++) {
            if (S[i] == A[i]) {
                M[i] = 'G';
            } else {
                freq[S[i] - 'a']++;
            }
        }

        for (int i = 0; i < 5; i++) {
            if (M[i] == 'G') {
                continue;
            }

            int c = A[i] - 'a';
            if (freq[c] > 0) {
                M[i] = 'Y';
                freq[c]--;
            }
        }

        cout << M << '\n';
    }

    return 0;
}