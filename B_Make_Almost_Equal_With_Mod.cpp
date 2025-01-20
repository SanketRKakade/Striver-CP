// #include <bits/stdc++.h>
// using namespace std;

// typedef long long ll;
// typedef vector<ll> vi;
// #define ff first
// #define ss second
// #define pb push_back
// #define mp make_pair
// #define all(a) a.begin(), a.end()
// #define rall(a) a.rbegin(), a.rend()
// #define loop(i,a,b) for(int i = a; i < b; i++)
// #define rloop(i,a,b) for(int i = a ; i>=b ; i--)

// #ifndef ONLINE_JUDGE
// #else
// #define debug(...) 42
// #endif

// int main() {
//     ios::sync_with_stdio(0);
//     cin.tie(0);

//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin>>n;
//         vector<int>v(n);
//         for(int i=0 ; i<n ; i++){
//             cin>>v[i];
//         }
//         sort(v.begin(),v.end());
        
//         int ans = v[0];
//         unordered_set<int>s;
//         if(v.size()==2){
//             cout<<1<<endl;
//         }
//         else{
//             while(s.size()!=2 && ans>0){
//                 s.clear();
//                 for(auto i:v){
//                     s.insert(i%ans);
//                 }
//                 ans--;
//             }
//             cout<<ans+1<<endl;
//         }
        
        
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        
        vector<long long> a(n);
        for (long long i = 0; i < n; ++i) {
            cin >> a[i];
        }
        
        long long gcd = 0; // Initialize GCD of differences
        for (long long i = 1; i < n; ++i) {
            gcd = __gcd(gcd, abs(a[i] - a[i - 1]));
        }
        
        cout << 2 * gcd << endl; // Output result
    }
    return 0;
}
