/*“ Mnn boot karega k chor yrr apne se nahi hoga  Just ask 1 question “ Why I started ? “
Countless reasons not to do it, but only one reason to go for it — and that's enough.*/


#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n,m;
        cin>>n>>m;

        if(n == 1){
            cout<<m*4<<endl;
            break;
        }

        ll ans = m*4;
        ll prev = 0;

        while(n--){
            ll x;
            ll y;
            cin>>x>>y;


            ans += 4*m;
            ans -= prev;

            if(n == 0){
                cout<<ans<<endl;
                break;
            }

            prev = 0;
            if(x<m && y<m){
                prev += ((m-x));
                prev += ((m-y));
            }

            // if(y<m){
            //     prev += ((m-y));
            // }

            ans -= prev;
        }

        cout<<ans<<endl;
    }
    return 0;
}