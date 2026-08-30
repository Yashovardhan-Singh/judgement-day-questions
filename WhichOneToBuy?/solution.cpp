#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int N;
        cin >> N;
        int cnt[11] = {0};
        for(int i = 0; i < N; i++){
            int a;
            cin >> a;
            cnt[a]++;
        }
        int maxCount = 0, laptop = -1;
        bool tie = false;
        for(int i = 1; i <= 10; i++){
            if(cnt[i] > maxCount){
                maxCount = cnt[i];
                laptop = i;
                tie = false;
            } else if(cnt[i] == maxCount && maxCount != 0){
                tie = true;
            }
        }
        if(tie) cout << "CONFUSED\n";
        else cout << laptop << "\n";
    }
    return 0;
}
