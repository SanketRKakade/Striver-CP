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

vi small_primes = {2, 3, 5, 7};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        ll l,r;
        cin>>l>>r;
        ll tot= r-l+1;
        ll not_good= 0;

        loop(mask,1,1<<4){
            ll mul=1;
            int bits= 0;
            loop(i,0,4){
                if(mask &(1<< i)){
                    mul *=small_primes[i];
                    bits++;
                }
            }
            if(mul >r) continue;

            ll cnt =r/mul -(l- 1)/mul;
            if(bits % 2)not_good+= cnt;
            else not_good -=cnt;
        }

        cout<<tot -not_good <<endl;
    }
    return 0;
}