#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    vector<int> freq(26, 0);

    for (char c : s) {
        freq[c - 'a']++;
    }

    int odd_count = 0;

    for (int i = 0; i < 26; i++) {
        if (freq[i] % 2 != 0) {
            odd_count++;
        }
    }

    if (odd_count == 0 || odd_count % 2 == 1) {
        cout << "First" << endl;
    } else {
        cout << "Second" << endl;
    }

    return 0;
}
