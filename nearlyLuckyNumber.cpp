#include <bits/stdc++.h>
using namespace std;

bool isLuckyNumber(int count) {
    string str = to_string(count);
    for (char ch : str) {
        if (ch != '4' && ch != '7') {
            return false;
        }
    }
    return true;
}

int main() {
    string n;
    cin >> n;
    int luckyDigitCount = 0;

    for (char ch : n) {
        if (ch == '4' || ch == '7') {
            luckyDigitCount++;
        }
    }

    if (isLuckyNumber(luckyDigitCount)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
