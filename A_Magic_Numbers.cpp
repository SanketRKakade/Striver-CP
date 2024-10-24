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

bool isMagicNumber(const string& s) {
    int i=0;
    while(i<s.length()) {
        if(s.substr(i,3)=="144") {
            i+=3;
        }else if(s.substr(i,2)=="14") {
            i+=2;
        }else if(s.substr(i,1)== "1") {
            i +=1;
        } else{
            return false;
        }
    }
    return true;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string n;
    cin>>n;
    if (isMagicNumber(n)) {
        cout <<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
    }
    return 0;
}