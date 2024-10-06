#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int i=0;
    while(i<s.length()){
        if(s[i]=='.'){
            cout<<0;
        }
        if(s[i]=='-'&& s[i+1]=='.'){
            i++;
            cout<<1;
        }
        else if(s[i]=='-'&& s[i+1]=='-'){
            i++;
            cout<<2;
        }
        i++;
    }
    return 0;
}