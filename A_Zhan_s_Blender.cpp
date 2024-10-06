#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int x,y;
        cin>>x>>y;
        int mini = min(x,y);
        if(n%mini == 0){
            cout<<n/mini<<endl;
        }
        else{
            cout<<(n/mini)+1<<endl;
        }
    }
    return 0;
}