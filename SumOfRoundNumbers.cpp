#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

int findSumOfRoundNumbers(int n , vector<int> &v){
    int originalNumber = n;
    int i=0;
    while(n>0){
        if(n%10!=0){
            v.push_back((n%10)*pow(10,i));
        }
        i++;
        n=n/10;
    }
    if(v.empty()){
        v.push_back(originalNumber);
    }
    return v.size();
}

int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v;
        int ans = findSumOfRoundNumbers(n,v);
        cout<<ans<<endl;
        for(int i=0 ; i<v.size() ; i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}