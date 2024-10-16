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
        string s;
        cin>>s;
        string t;
        cin>>t;
        int n = s.size();
        int m = t.size();
        int i=0;
        int count=0;
        while(true){
            if(s[i]!=t[i]) break;
            else{
                count++;
                i++;
            }
        }
        if(s==t){
            cout<<s.length()+1<<endl;
        }
        else if(count==0){
            cout<<m+n<<endl;
        }
        else{
            cout<<m+n-count+1<<endl;
        }
        
    }
    return 0;
}