#include <iostream>
#include <string>
#include <vector>

using namespace std;

void solve_exam(int T, vector<pair<string, string> >& test_cases) {
    for (int case_num = 0; case_num < T; ++case_num) {
        string s = test_cases[case_num].first;
        string t = test_cases[case_num].second;
        int n = s.length(), m = t.length();
        int j = 0;  // Pointer for string t

        // First pass: Try to match t as a subsequence of s
        for (int i = 0; i < n; ++i) {
            if (j < m && (s[i] == t[j] || s[i] == '?')) {
                // Match found or replace '?'
                s[i] = t[j];
                j++;
            }
        }

        // Check if we matched all characters of t
        if (j < m) {
            cout << "NO" << endl;
            continue;
        }

        // Second pass: Replace remaining '?' with 'a'
        for (int i = 0; i < n; ++i) {
            if (s[i] == '?') {
                s[i] = 'a';
            }
        }

        cout << "YES" << endl;
        cout << s << endl;
    }
}

int main() {
    int T;
    cin >> T;
    vector<pair<string, string> > test_cases(T);
    
    for (int i = 0; i < T; ++i) {
        cin >> test_cases[i].first;  // Read string s
        cin >> test_cases[i].second; // Read string t
    }

    solve_exam(T, test_cases);
    return 0;
}