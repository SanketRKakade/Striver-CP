#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin>>s;
    unordered_map<char,int>m;
    int count=0;
    for(int i=0 ; i<s.length() ; i++){
        if(m[s[i]]==0) {
            count++;
        }
        m[s[i]]++;
    }
    // for(auto i:m){
    //     cout<<i.first<<" "<<i.second<<endl;
    // }
    // cout<<endl<<count<<endl<<endl;
    if(count%2==0) cout<<"CHAT WITH HER!"<<endl;
    else cout<<"IGNORE HIM!"<<endl;
    return 0;
}