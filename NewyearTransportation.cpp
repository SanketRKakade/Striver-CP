#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,t;
    cin>>n>>t;
    unordered_map<int,int>m;
    for(int i=1 ; i<n ; i++){
        cin>>m[i];
    }
    vector<int>v;
    int count=1;
    v.push_back(1);
    while(count!=n){
        count+=m[count];
        v.push_back(count);
    }
    // for(int i=0 ; i<v.size() ; i++){
    //     cout<<v[i]<<endl;
    // }
    bool found=false;
    for(int i=0 ; i<v.size() ; i++){
        if(v[i]==t){
            found=true;
            break;
        }
    }
    if(found){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}