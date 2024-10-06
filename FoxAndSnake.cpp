#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

int main(){

    int n,m;
    cin>>n>>m;
    vector<vector<char> >snake(n,vector<char>(m));
    bool right =1;
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            if(i%2==0){
                snake[i][j]='#';
            }
            else{
                if(right && j==m-1){
                    snake[i][j]='#';
                }
                else if(!right && j==0){
                    snake[i][j]='#';
                }
                else{
                    snake[i][j]='.';
                }
            }
        }
        if(i%2==0){
            continue;
        }
        else{
            if(right && i%2!=0){
                right=0;
            }
            else{
                right=1;
            }
        }
        
    }

    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            cout<<snake[i][j];
        }
        cout<<endl;
    }

    return 0;
}