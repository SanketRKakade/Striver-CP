// #include<bits/stdc++.h>
// using namespace std;

// int solve(int n,string s){
//     int count=0;
//     string s1,s2;
//     for(int i=0 ; i<n ; i++){
//         if(i%2==0) s1+=s[i];
//         else s2+=s[i];
//     }
//     cout<<s1<<"->"<<s2<<endl;
   

//     return 0;
// }

// int main()
// {
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         string s;
//         cin>>s;
//         cout<<solve(n,s)<<endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int solve(int n, string s) {
    string s1, s2;

    // Split the string into s1 and s2 based on even and odd indices
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0)
            s1 += s[i];
        else
            s2 += s[i];
    }

    // Calculate the frequency of characters in s1 and s2
    unordered_map<char, int> freq1, freq2;
    for (char c : s1) freq1[c]++;
    for (char c : s2) freq2[c]++;

    // Find the most frequent characters in s1 and s2
    char max_char_s1 = s1[0];
    int max_freq_s1 = freq1[max_char_s1];
    for (const auto& p : freq1) {
        if (p.second > max_freq_s1) {
            max_char_s1 = p.first;
            max_freq_s1 = p.second;
        }
    }

    char max_char_s2 = s2[0];
    int max_freq_s2 = freq2[max_char_s2];
    for (const auto& p : freq2) {
        if (p.second > max_freq_s2) {
            max_char_s2 = p.first;
            max_freq_s2 = p.second;
        }
    }

    // Total mismatches in s1 and s2
    int mismatches_s1 = s1.size() - max_freq_s1;
    int mismatches_s2 = s2.size() - max_freq_s2;

    // Handle the odd length of the string
    if (n % 2 != 0) {
        return min(mismatches_s1 + mismatches_s2, min(mismatches_s1, mismatches_s2) + 1);
    } else {
        return mismatches_s1 + mismatches_s2;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        cout << solve(n, s) << endl;
    }
    return 0;
}
