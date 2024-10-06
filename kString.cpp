#include<bits/stdc++.h>
using namespace std;

// string findString(int n , unordered_map<char,int>m){
//     string ans = "";
//     for(auto i:m){
//         ans+=(i.first*(i.second/n));
//     }
//     string finalAns = "";
//     for(int i=0 ; i<n ; i++){
//         finalAns+=ans;
//     }
//     return finalAns;
// }

string findString(int n, unordered_map<char, int> m) {
    string ans = "";
    for (auto i : m) {
        ans += string(i.second / n, i.first); 
    }
    string finalAns = "";
    for (int i = 0; i < n; ++i) {
        finalAns += ans; 
    }
    return finalAns;
}

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    bool isKString = true;
    unordered_map<char,int>m;
    for(char c:s){
        m[c]++;
    }
    for(auto i:m){
        // cout<<i.first<<" "<<i.second<<endl;
        if(i.second%n!=0) {
            isKString = false;
            break;
        }
    }
    if(isKString){
        cout<<findString(n,m)<<endl;
    }
    else cout<<-1<<endl;
    return 0;
}

