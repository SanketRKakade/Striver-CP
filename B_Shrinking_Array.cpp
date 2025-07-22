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
#define rloop(i,a,b) for(int i = a ; i >= b ; i--)

#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(...) 42
#endif

int lg2(int x) {
    int res=0;
    while((1<<res)<=x) res++;
    return res;
}

struct S {
    int n;
    vector<vector<int>>mn,mx;

    S(const vector<int>&a){
        n=a.size();
        int lg=lg2(n);
        mn.assign(lg,vector<int>(n));
        mx.assign(lg,vector<int>(n));
        loop(i,0,n) mn[0][i]=mx[0][i]=a[i];
        loop(k,1,lg) {
            int len = 1<< (k- 1);
            loop(i,0,n - 2* len +1) {
                mn[k][i] =min(mn[k- 1][i],mn[k- 1][i + len]);
                mx[k][i] =max(mx[k -1][i],mx[k- 1][i+ len]);
            }
        }
    }

    pair<int,int> get(int l,int r){
        int len = r -l + 1;
        int k = lg2(len)-1;
        int j =1<<k;
        int mi =min(mn[k][l], mn[k][r - j + 1]);
        int ma =max(mx[k][l],mx[k][r -j+ 1]);
        return {mi,ma};
    }
};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >>t;
    while(t--) {
        int n;
        cin >>n;
        vector<int>a(n);
        loop(i,0,n) cin>>a[i];

        bool ok=false;
        loop(i,0, n-1) {
            if (abs(a[i] -a[i+1])<=1) {
                ok =true;
                break;
            }
        }
        if(ok){
            cout<<0<<endl;
            continue;
        }

        S st(a);
        int ans =n;
        loop(i,0,n) {
            loop(j,i+1,n) {
                int c= j-i-1;
                if (c >= ans) break;

                auto [m1, M1] = st.get(i,j-1);
                if (m1 <=a[j] + 1 &&M1 >=a[j]-1) {
                    ans= c;
                    break;
                }

                if (i+ 1<= j) {
                    auto[m2,M2] =st.get(i+1,j);
                    if (m2 <=a[i]+1 && M2 >= a[i]-1) {
                        ans = c;
                        break;
                    }
                }
            }
        }

        if(ans==n) cout<<-1<<endl;
        else cout<<ans<<endl;
    }
    return 0;
}
