#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n%2!=0){
        cout<<-1<<endl;
    }
    else{
        vector<int>v(n);
        for(int i=0 ; i<n ; i++){
            if(i%2==0) v[i]=i+2;
            else v[i]=i;
            cout<<v[i]<<" ";
        }

    }

    return 0;
}