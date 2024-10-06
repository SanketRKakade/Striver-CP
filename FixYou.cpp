#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        char s;
        int count=0;
        for(int i=0 ; i<n ; i++){
            for(int j=0 ; j<m ; j++){
                cin>>s;
                if(i==n-1 && s=='D') count++;
                if(j==m-1 && s=='R') count++;
            }
        }

        cout<<count<<endl;
    }
    return 0;
}