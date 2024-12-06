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
        cin>>n;
        
        vector<int>a(n);
        for(int i=0; i<n; i++) {
            cin>>a[i];
        }
        
        int even_misplaced = 0, odd_misplaced = 0;
        
        for (int i=0; i<n; i++) {
            if (i%2==0 && a[i] % 2!=0) even_misplaced++;
            if (i%2==1 && a[i] % 2==0) odd_misplaced++;
        }
        
        if (even_misplaced == odd_misplaced) {
            cout<<even_misplaced<<endl;
        } else {
            cout<<-1<<endl;
        }
    }
    return 0;
}