#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int l=0 , u=0;
    for(int i=0 ; i<s.length() ; i++){
        if(s[i]>='a' && s[i]<='z'){
            l++;
        }
        else{
            u++;
        }
    }
    // cout<<l<<u<<endl;
    if(u<=l){
        for(int i=0 ; i<s.length() ; i++){
            if(s[i]>='A' && s[i]<='Z'){
                s[i] = char(s[i]+32);
            }
        }
    }
    else {
        for(int i=0 ; i<s.length() ; i++){
            if(s[i]>='a' && s[i]<='z'){
                s[i] = char(s[i]-32);
            }
        }
    }
    cout<<s<<endl;
    return 0;
}