#include<bits/stdc++.h>
using namespace std;

int solve(int a , int b ,int &count, int n){
    
    if(a>n || b>n) return count;
    if(a>b){
        b+=a;
        solve(a,b,count,n);
    }
    else{
        a+=b;
        solve(a,b,count,n);
    }
    count++;
    return count;
}

int main(){

    int t;
    cin>>t;
    while(t--){
        int a,b,n;
        cin>>a>>b>>n;
        int count=0;
        int noOfSteps = solve(a,b,count,n);
        cout<<noOfSteps<<endl;
    }
    return 0;
}