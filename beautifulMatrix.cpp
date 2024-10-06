#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<vector<int> > v(5,vector<int>(5));
    int a=0,b=0;
    for(int i=0 ; i<5 ; i++){
        for(int j=0 ; j<5 ; j++){
            cin>>v[i][j];
            if(v[i][j]==1){
                a=i;
                b=j;
            }
            //cout<<v[i][j]<<" ";
        }
        //cout<<endl;
    }

    int ans = abs(a-2)+abs(b-2);
    cout<<ans<<endl;



    return 0;
}