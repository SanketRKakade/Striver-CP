#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    vector<long long>a(n);
    unordered_map<long long,long long>mapp;

    for(long long i=0 ; i<n ; i++){
        cin>>a[i];
        mapp[a[i]]=i+1;
    }
    long long m;
    cin>>m;
    vector<long long>b(m);
    long long count1=0;
    long long count2=0;
    for(long long i=0 ; i<m ; i++){
        cin>>b[i];
        count1+=mapp[b[i]];
        count2+=n+1-mapp[b[i]];
    }
    cout<<count1<<" "<<count2<<endl;

    return 0;
}