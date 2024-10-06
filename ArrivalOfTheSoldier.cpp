#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0 ; i<n ; i++){
        cin>>v[i];
    }
    auto itr = max_element(v.begin(),v.end());
    int largestElement = *itr;
    int indexLargestElement = distance(v.begin(),itr);
    reverse(v.begin(),v.end());
    auto itr2 = min_element(v.begin(),v.end());
    int smallestElement = *itr2;
    int indexSmallestElement = n-distance(v.begin(),itr2)-1;
    // cout<<largestElement<<indexLargestElement<<" "<< smallestElement<<indexSmallestElement<<endl;
    if(indexLargestElement<indexSmallestElement){
        cout<<(indexLargestElement-0)+(n-1-indexSmallestElement);
    }
    else{
        cout<<(indexLargestElement-0)+(n-1-indexSmallestElement)-1;
    }

    return 0;
}