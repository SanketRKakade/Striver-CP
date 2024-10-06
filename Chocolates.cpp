// #include<bits/stdc++.h>
// using namespace std;

// int solve(int sIndex , vector<int>&v){
//     if(sIndex>=v.size()){
//         int sum = accumulate(v.begin(),v.end(),0);
//     }
//     auto min = min_element(v.begin()+sIndex , v.end());
//     int index = distance(v.begin()+sIndex,min);

//     for(int i=index-1 ; i>=0 ; i--){
//         if(*min==0){
//             v[i]=0;
//         }
//         v[i]=*min--;
//     }
//     solve(index+1,v);
//     return accumulate(v.begin(),v.end(),0);
// }

// int main()
// {
//     int n;
//     cin>>n;
//     vector<int>v(n);
//     for(int i=0 ; i<n ; i++){
//         cin>>v[i];
//     }
//     cout<<solve(0,v)<<endl;
    
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int solve(int sIndex, vector<int>& v) {
    // Base condition to stop recursion
    if (sIndex >= v.size()) {
        return accumulate(v.begin(), v.end(), 0);
    }

    // Find the minimum element from sIndex onwards
    auto minIt = min_element(v.begin() + sIndex, v.end());
    int index = distance(v.begin(), minIt);

    // Adjust the elements before the minimum element
    for (int i = index - 1; i >= 0; i--) {
        if (*minIt == 0) {
            v[i] = 0;
        } else {
            v[i] = *minIt--;
        }
    }

    // Recursive call starting from the next element after the current minimum
    return solve(index + 1, v);
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    cout << solve(0, v) << endl;

    return 0;
}
