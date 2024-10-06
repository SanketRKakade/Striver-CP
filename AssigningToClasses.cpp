// // #include<bits/stdc++.h>
// // using namespace std;

// // int solve(int n , vector<int>v){
// //     int sum1=v[0] , sum2=v[1];
// //     for(int i=2 ; i<n ; i+=2){
// //         if(sum1<sum2){
// //             sum1+=max(v[i],v[i+1]);
// //             sum2+=min(v[i],v[i+1]);
// //         }
// //         else{
// //             sum1+=min(v[i],v[i+1]);
// //             sum2+=max(v[i],v[i+1]);
// //         }
// //         cout<<"->"<<sum1<<" -> "<<sum2<<"->"<<endl;
// //     }
// //     return abs(sum1-sum2);
// // }

// // int main()
// // {
// //     int t;
// //     cin>>t;
// //     while(t--){
// //         int n;
// //         cin>>n;
// //         vector<int>v(n*2);
// //         for(int i=0 ; i<n*2 ; i++){
// //             cin>>v[i];
// //         }
// //         sort(v.begin(),v.end());
// //         cout<<solve(n*2,v)<<endl;
// //     }
// //     return 0;
// // }

// #include<bits/stdc++.h>
// using namespace std;

// int solve(int n , vector<int>v){
//     int sum1 = v[0], sum2 = v[1];
    
//     for(int i = 2; i < n; i += 2){
//         if(i + 1 < n) {
//             if(sum1 < sum2) {
//                 sum1 += max(v[i], v[i + 1]);
//                 sum2 += min(v[i], v[i + 1]);
//             } else {
//                 sum1 += min(v[i], v[i + 1]);
//                 sum2 += max(v[i], v[i + 1]);
//             }
//         } else {
//             // Handle the case where there is an odd number of elements
//             if(sum1 < sum2) {
//                 sum1 += v[i];
//             } else {
//                 sum2 += v[i];
//             }
//         }
//         // cout << "-> " << sum1 << " -> " << sum2 << " ->" << endl;
//     }
    
//     return abs(sum1 - sum2);
// }

// int main() {
//     int t;
//     cin >> t;
//     while(t--) {
//         int n;
//         cin >> n;
//         vector<int> v(n * 2);  // Make sure the vector size is n * 2
//         for(int i = 0; i < n * 2; i++) {
//             cin >> v[i];
//         }
//         sort(v.begin(), v.end());
//         cout << solve(n * 2, v) << endl;
//     }
//     return 0;
// }


#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(2 * n);
        for (int i = 0; i < 2 * n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        int min_diff = abs(a[n] - a[n - 1]);
        cout << min_diff << endl;
    }
    return 0;
}
