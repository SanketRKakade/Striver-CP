#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        string s,k;
        cin>>s>>k;
        if(s==k){
            cout<<s<<" "<<k<<endl;
        }
        else{
            cout<<k[0]+s.substr(1,3)<<" "<<s[0]+k.substr(1,3)<<endl;
        }
    }
    return 0;
}