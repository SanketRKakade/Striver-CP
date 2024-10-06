#include<iostream>
using namespace std;

int main(){
    int x=0;
    int s;
    cin>>s;
    while(s--){
        string s;
        cin>>s;
        if(s=="x++" || s=="++x" || s=="X++" || s=="++X"){
            x++;
        }
        if(s=="x--" || s=="--x" || s=="X--" || s=="--X"){
            x--;
        }
    }
    cout<<x<<endl;
    return 0;
}
