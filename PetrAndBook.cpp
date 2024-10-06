#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>v(7);
    for(int i=0 ; i<7 ; i++){
        cin>>v[i];
    }
    int pagesRead = 0;
    int i=1;
    while(pagesRead < n){
        if(i==8){
            i=1;
        }
        pagesRead += v[i-1];
        i++;
    }
    cout<<i-1<<endl;

    return 0;
}   