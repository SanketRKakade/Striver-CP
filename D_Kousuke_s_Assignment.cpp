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
    cin >>t;
    while(t--) {
        int n;
        cin>> n; 
        vector<int>a(n);
        loop(i,0,n) cin>>a[i];

        unordered_map<int,int>preSum; 
        preSum[0] =-1; 
        int sum = 0,c = 0,lastIdx = -1;

        loop(i, 0,n) {
            sum += a[i];

            if (preSum.count(sum) && preSum[sum]>=lastIdx) {
                c++;
                lastIdx =i;
            }
            preSum[sum]= i;
        }
        cout << c<<endl;
    }
    return 0;
}
