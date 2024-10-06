#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    string ans = "";
    int j=1;
    int i=0;
    while(i<n){
        ans = ans+s[i];
        i+=j;
        j++;
    }
    cout<<ans<<endl;
    return 0;
}   