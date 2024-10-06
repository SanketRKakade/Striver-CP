#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        if(n<k) cout<<n<<endl;
        else if(n==k) cout<<1<<endl;
        else if(k==1) cout<<n<<endl;
        else{
            int sum=0;
            while(n>=k){
                sum+=n%k;
                n=n/k;
            }
            sum+=n;
            cout<<sum<<endl;
        }

    }
    return 0;
}