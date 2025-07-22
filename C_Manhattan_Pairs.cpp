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
        int n;
        cin >>n;
        vector<array<int,3>>pts(n);

        loop(i,0,n){
            cin >>pts[i][0]>> pts[i][1];
            pts[i][2]= i+1;
        }

        sort(all(pts),[](const auto &a,const auto &b) {
            if (a[0] !=b[0]) return a[0]<b[0];
            return a[1] <b[1];
        });
        int half= n/2;

        vector<array<int,3>>L(pts.begin(),pts.begin()+half);
        vector<array<int,3>>R(pts.begin()  +half,pts.end());

        sort(all(L),[](const auto &a, const auto &b) {
            return a[1]< b[1];
        });

        sort(all(R),[](const auto &a,const auto&b) {
            return a[1]> b[1];
        });

        loop(i,0,half){
            cout <<L[i][2]<<" "<< R[i][2]<<endl;
        }
    }
    return 0;
}