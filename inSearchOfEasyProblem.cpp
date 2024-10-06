#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    bool easy = true;
    for(int i=0 ; i<n ; i++){
        int n;
        cin>>n;
        if(n==1) easy = false;
    }
    if(easy) cout<<"EASY"<<endl;
    else cout<<"HARD"<<endl;
    return 0;
} 