#include<bits/stdc++.h>
using namespace std;

vector<int> f(int n){
    
    vector<int>v(n);
    if(n%2==0){
        v.push_back(-1);
        return v;
    }
    else {
        
        int f=0;
        int l=n-1;
        int m=n/2;
        v[m]=1;
        int i=2;
        while(f<l){
            v[l]=i;
            i++;
            l--;
            v[f]=i;
            i++;
            f++;
        }
    }
    return v;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> ans = f(n);
        if(ans[n]==-1) cout<<-1<<endl;
        else{
            for(int i=0 ; i<ans.size() ; i++){
                cout<<ans[i]<<" ";
            }
            cout<<endl;
        }
        
    }
    return 0;
}