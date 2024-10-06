#include<bits/stdc++.h>
using namespace std;

int solve(int size , vector<int>&v){
    if(size==1) return v[0];
    if(v[0]<v[2]){
        v.erase(v.begin(),v.begin()+2);
    }
    else{
        v.erase(v.begin()+1,v.begin()+3);
    }
    return solve(size-=2,v);
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0 ; i<n ; i++){
            cin>>v[i];
        }
        cout<<solve(n,v)<<endl;
    }
    return 0;
}