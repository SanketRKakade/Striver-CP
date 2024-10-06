#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        
        int n,k;
        cin>>n>>k;
        vector<int>v(n);
        for(int i=0 ; i<n ; i++){
            cin>>v[i];
        }
        int hasGold = 0;
        int give = 0;
        for(int i=0 ; i<n ; i++){
            if(v[i]>=k){
                hasGold+=v[i];
            }
            if(v[i]==0 and hasGold!=0){
                hasGold--;
                give++;
            }
        }
        cout<<give<<endl;
    }
    
    return 0;
}