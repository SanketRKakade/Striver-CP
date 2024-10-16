#include <bits/stdc++.h>
#include <unordered_set>
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
        cin>>n>>s;
        vector<int>leftDistinct(n), rightDistinct(n);
        unordered_set<char> leftSet, rightSet;

        loop(i,0,n){
            leftSet.insert(s[i]);
            leftDistinct[i] = leftSet.size();
        }

        rloop(i,n-1,0){
            rightSet.insert(s[i]);
            rightDistinct[i] = rightSet.size();
        }

        int maxSum = 0;
        loop(i,0,n-1){
            maxSum =max(maxSum, leftDistinct[i] + rightDistinct[i + 1]);
        }

        cout<<maxSum<<endl;
    }
    return 0;
}