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
        int n,k;
        cin>>n>>k;
        vector<int>v(n);
        loop(i,0,n){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        // loop( i,0,n){
        //     cout<<v[i];
        // }
        int i = 0;
        int j = n-1;
        int count=0;
        while(i<j){
            if(v[i]+v[j]==k){
                count++;
                i++;
                j--;
            }
            else if(v[i]+v[j]<k){
                i++;
            }
            else{
                j--;
            }
        }
        cout<<count;
        cout<<endl;
    }
    return 0;
}