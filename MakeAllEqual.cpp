#include<bits/stdc++.h>
using namespace std;

int f(int n , vector<int>v){
    if(n==1) return 0;
    unordered_map<int,int>m;
    for(auto i:v){
        m[i]++;
    }

    bool allDiff = true;
    for(auto i:m){
        //cout<<i.first<<"->"<<i.second<<endl;
        if(i.second!=1) allDiff = false;
    }
    if(allDiff) return n-1;

    int maxVal = INT_MIN;

    for (auto &pair : m) {
        if (pair.second > maxVal) {
            maxVal = pair.second;
        }
    }
    return n-maxVal;
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
        int ans = f(n,v);
        cout<<ans<<endl;
    }
    return 0;
}