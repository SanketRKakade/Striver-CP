#include<bits/stdc++.h>
using namespace std;

int main()
{
    // long long n,m;
    // cin>>n>>m;
    // long long result = n^m;
    // for(int i=0 ; i)
    // cout<<result;
    string n,m;
    cin>>n>>m;
    string s="";
    for(int i=0 ; i<n.length() ; i++){
        if(n[i]!=m[i]){
            s+='1';
        }
        else{
            s+='0';
        }
    }
    cout<<s<<endl;
    return 0;
}