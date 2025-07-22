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
        vi v(n);
        loop(i,0,n) cin>>v[i];
        unordered_map<int,int>mp;
        int sum=0;
        for(auto i:v){
            mp[i]++;
            sum+=i;
        } 
        if(mp[1]==n || mp[2]==n) cout<<0<<endl;
        else{
            if(mp[1]%2==1) cout<<mp[2]<<endl;
            else cout<<min(mp[2],mp[1]/2)<<endl;
            
        }


    }
    return 0;
}