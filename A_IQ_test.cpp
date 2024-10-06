#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n;
    cin>>n;
    vector<ll>v(n);
    for(int i=0 ; i<n ; i++){
        cin>>v[i];
    }
    for(int i=0 ; i<n-1 ; i++){
        int j=i+1;
        if(abs(v[j]-v[i])%2!=0){
            if(i==0 && abs(v[j+1]-v[i+1])%2!=0){
                cout<<j+1<<endl;
                // cout<<"Inside 1"<<endl;
                break;
            } 
            else if(i==0 && abs(v[j+1]-v[i+1])%2==0){
                cout<<i+1<<endl;
                // cout<<"Inside 2"<<endl;
                break;
            } 
            else if(i==n-1 && abs(v[j-1]-v[i-1])%2!=0){
                cout<<i+1<<endl;
                // cout<<"Inside 3"<<endl;
                break;
            }
            else if(i==n-1 && abs(v[j-1]-v[i-1])%2==0){
                cout<<j+1<<endl;
                // cout<<"Inside 4"<<endl;
                break;
            } 
            else{
                cout<<j+1<<endl;
                // cout<<"Inside 5"<<endl;
                break;
            }
        }
    }

    return 0;
}