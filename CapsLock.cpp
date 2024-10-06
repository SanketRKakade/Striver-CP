#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    bool allCaps = true;
    bool capsExceptFirst = true;

    // Check if all letters are uppercase
    for(int i = 0; i < s.length(); i++) {
        if(islower(s[i])) {
            allCaps = false;
        }
    }

    // Check if only the first letter is lowercase and the rest are uppercase
    if (islower(s[0])) {
        for (int i = 1; i < s.length(); i++) {
            if (islower(s[i])) {
                capsExceptFirst = false;
                break;
            }
        }
    } else {
        capsExceptFirst = false;
    }

    // Transform the string if any condition matches
    if (allCaps || capsExceptFirst) {
        s[0] = toupper(s[0]);
        for (int i = 1; i < s.length(); i++) {
            s[i] = tolower(s[i]);
        }
    }

    cout << s << endl;
    return 0;
}
