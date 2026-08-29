#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        int answer = -1;
        for (int i = N - 1; i >= 1; i--) {
            if (A[i] != 0) {
                answer = i - 1;
                break;
            }
        }
        cout << answer << '\n';
    }

    return 0;
}