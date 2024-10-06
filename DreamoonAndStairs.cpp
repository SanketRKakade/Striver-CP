#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    if(n<m){
        cout<<-1<<endl;
    }
    else{
        int q = n/2;
        int r = n%2;
        int steps = q+r;
        if(steps%m==0){
            cout<<steps<<endl;
        }
        else{
            while(steps%m!=0){
                steps++;
            }
            cout<<steps<<endl;
        }
    }
    return 0;
}