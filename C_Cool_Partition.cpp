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
//         vi v(n);
//         loop(i,0,n){
//             cin>>v[i];
//         }
//         unordered_map<int,int>mp;
//         int maxi=0;
//         int count=0;
//         loop(i,0,n){
//             mp[v[i]]++;
//             maxi=max(maxi,mp[v[i]]);
//         }
//         int sz=mp.size();
//         if(sz<maxi) cout<<1<<endl;
//         else cout<<maxi<<endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        unordered_map<int, int> last;

        for(int i = 0; i < n; i++){
            cin >> a[i];
            last[a[i]] = i; // update last occurrence
        }

        int segments = 0;
        int maxLast = 0;

        for(int i = 0; i < n; i++){
            maxLast = max(maxLast, last[a[i]]);
            if(i == maxLast){
                segments++;
            }
        }

        cout << segments << "\n";
    }
    return 0;
}
