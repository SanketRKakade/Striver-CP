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
//         int n,k,p;
//         cin>>n>>k>>p;
//         if(k==0) cout<<0<<endl;
//         else if(n==1 && abs(k)>p) cout<<-1<<endl;
//         if(abs(k)>n*p) cout<<-1<<endl;
//         else if(abs(k)==p) cout<<1<<endl;
//         else{
//             int a = abs(k)/p;
//             int left = abs(k)-a*p;
//             if(a>n) cout<<-1<<endl;
//             else if(abs(k)%p==0) cout<<a<<endl;
//             else if(left<p) cout<<a+1<<endl;
//             else cout<<-1<<endl;
//         }
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vi;
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define loop(i,a,b) for(int i = a; i < b; i++)
#define rloop(i,a,b) for(int i = a ; i>=b ; i--)

#ifndef ONLINE_JUDGE
#else
#define debug(...) 42
#endif

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n, k, p;
        cin >> n >> k >> p;

        if (k == 0) {
            cout << 0 << endl;
            continue;
        }

        if (abs(k) > n * p) {
            cout << -1 << endl;
            continue;
        }
        int min_ops=(abs(k) + p - 1) / p; 

        if (min_ops <= n) {
            cout << min_ops << endl;
        } else {
            cout << -1 << endl;
        }
    }
    return 0;
}
