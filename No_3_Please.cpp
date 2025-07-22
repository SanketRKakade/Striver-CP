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
//         vi v(n+1);
//         loop(i,1,n+1) cin>>v[i];
//         int sol = v[1];
//         loop(i,2,n+1){
//             int k=i-1;
//             int done = max(k,(int)v[i]+1);
//             sol = min(done,sol);
//         }
//         cout<<sol<<endl;
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
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
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
    while(t--) {
        int n;
        cin>>n;
        vi a(n+1);
        loop(i,1,n+1) cin>>a[i];

        vi pf(n+1);
        pf[0]=0;
        loop(i,1,n+1) pf[i]=(pf[i-1]+a[i]) % 3;

        int lz =0;
        loop(i,1, n+1) {
            if (pf[i]== 0){
                lz=i;
            }
        }

        if (lz ==0) {
            cout<<"Yes"<<endl;
            continue;
        }

        array<int,3> cnt ={0,0,0};
        loop(i, 0, lz) cnt[pf[i]]++;

        bool ok =false;
        loop(k, lz,n+1) {
            if (cnt[pf[k]] ==0) {
                ok =true;
                break;
            }
            cnt[pf[k]]++;
        }
        if(ok) {
            cout<<"Yes"<<endl;
        }else {
            cout <<"No"<<endl;
        }
    }
    return 0;
}