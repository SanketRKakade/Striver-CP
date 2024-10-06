#include <algorithm> // Include this for std::sort
#include <cmath> // Include this for std::abs
#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int>v(3);
    cin>>v[0]>>v[1]>>v[2];
    sort(v.begin(),v.end());
    cout<<(v[1]-v[0]) + (v[2]-v[1]);
    
    
    return 0;
}