#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<vector<int> > v(n, vector<int>(3));
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<3 ; j++){
            cin>>v[i][j];
        }
    }
    int sum=0;
    bool isPossible = true;
    
    for(int i=0 ; i<3 ; i++){
        for(int j=0 ; j<n ; j++){
            sum+=v[j][i];
        }
        // cout<<sum<<endl;
        if(sum!=0){
            isPossible = false;
            break;
        }
    }
    if(isPossible){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
    return 0;
}