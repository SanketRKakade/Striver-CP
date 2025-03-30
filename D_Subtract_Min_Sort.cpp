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

void solve(vector<int>v,int n){
    loop(i,1,n){
        if(v[i-1]>v[i]) {
            cout<<"NO"<<endl;
            return;
        }
        v[i]-=v[i-1];
        v[i-1]=0;
    }
    cout<<( is_sorted(all(v)) ? "YES\n" : "NO\n");
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector<int>v(n);
        loop(i,0,n){
            cin>>v[i];
        }
        if(is_sorted(all(v))) cout<<"YES"<<endl;
        else{
            solve(v,n);
        }
    }
    return 0;
}