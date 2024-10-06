#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int l,r;
        cin>>l>>r;
        int sum = l;
        int j=1;
        while(sum<=r){
            sum+=j;
            j++;
        }
        cout<<j-1<<endl;
    }
    return 0;
}