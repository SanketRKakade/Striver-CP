#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    queue<int>q;
    unordered_map<int,int>mapp;

    for(int i=0 ; i<n ; i++){
        int ele;
        cin>>ele;
        q.push(i+1);
        mapp[i+1]=ele;
    }
    // int i=0;
    while(!q.empty()){
        if(q.size()==1){
            cout<<q.front()<<endl;
            break;
        }
        if(mapp[q.front()]<=k && mapp[q.front()!=-1]){
            mapp[q.front()]=-1;
            q.pop();
        }
        else{
            mapp[q.front()]-=k;
            q.push(q.front());
            q.pop();
        }
    }
    
    return 0;
}