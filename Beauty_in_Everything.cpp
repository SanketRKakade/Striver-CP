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
        string s;
        cin >>n>>s;
        if (n <=3){
            cout<<n<<endl;
            continue;
        }
        int a =0, b=0, c= 0,l=0,cnt=0;
        loop(r,0,n){
            if(s[r] =='0') cnt++;
            while(cnt >1){
                if(s[l] =='0')cnt--;
                l++;
            }
            a =max(a,r-l+ 1);
        }
        l =0;cnt=0;
        loop(r,0,n){
            if(s[r]== '1') cnt++;
            while (cnt> 1) {
                if (s[l]=='1')cnt--;
                l++;
            }
            b = max(b,r-l+ 1);
        }
        loop(i, 0,n-3){
            if((s[i] =='0' && s[i+1] =='1'&& s[i+ 2] =='0'&& s[i+ 3]=='1')||
                (s[i] =='1' &&s[i +1]== '0'&& s[i+2] =='1'&& s[i+3] =='0')){
                c= 4;
                break;
            }
        }
        cout<<max({a,b,c})<<endl;
    }
    return 0;
}