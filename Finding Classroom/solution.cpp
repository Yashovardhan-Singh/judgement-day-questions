#include <iostream>
#include <vector>
#include <string>

using namespace std;

string intToRoman(int num) {
    vector<pair<int, string>> valueSymbols = {
        {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
        {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"},
        {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}
    };
    
    string res = "";
    for (const auto& [value, symbol] : valueSymbols) {
        while (num >= value) {
            res += symbol;
            num -= value;
        }
    }
    return res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (cin >> n) {
        cout << intToRoman(n) << "\n";
    }
    return 0;
}
