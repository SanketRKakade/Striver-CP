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
        vector<int>v(n);
        int i = 0;
        int j = n-1;
        int number =1;
        int first= 0;
        while(j>=i){
            if(first==0){
                v[i]=number;
                i++;
                first=1;
                number ++;
            }
            else{
                first=0;
                v[j]=number;
                number ++;
                j--;
            }
        }
        for(auto &i:v)cout<<i<<" ";
        cout<<endl;

        }
    return 0;
}