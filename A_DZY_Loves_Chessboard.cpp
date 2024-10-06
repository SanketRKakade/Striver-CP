// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n, m;
//     cin >> n >> m;
    
//     vector<string> s(n);
//     for (int i = 0; i < n; i++) {
//         cin >> s[i];
//     }
    
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             if (s[i][j] == '.') {
//                 if (i == 0 && j == 0) {
//                     s[i][j] = 'B';
//                 } 
//                 else if (j > 0 && s[i][j-1] == 'B') {
//                     s[i][j] = 'W';
//                 } 
//                 else if (j > 0 && s[i][j-1] == 'W') {
//                     s[i][j] = 'B';
//                 } 
//                 else if (i > 0 && s[i-1][j] == 'B') {
//                     s[i][j] = 'W';
//                 } 
//                 else if (i > 0 && s[i-1][j] == 'W') {
//                     s[i][j] = 'B';
//                 }
//                 else {
//                     s[i][j] = 'B';
//                 }
//             }
//         }
//     }

//     for (int i = 0; i < n; i++) {
//         cout << s[i] << endl;
//     }

//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    vector<string> s(n);
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (s[i][j] == '.') {
                // Check neighbors and alternate
                if ((i + j) % 2 == 0) {
                    s[i][j] = 'B';
                } else {
                    s[i][j] = 'W';
                }
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << s[i] << endl;
    }

    return 0;
}

