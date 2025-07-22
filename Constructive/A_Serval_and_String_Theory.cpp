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
#define loop(i, a, b) for (int i = a; i < b; i++)
#define rloop(i, a, b) for (int i = a; i >= b; i--)

#ifndef ONLINE_JUDGE
#else
#define debug(...) 42
#endif

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int start = 0;
        int end = n - 1;
        set<char> st;
        for (auto i : s)
        {
            st.insert(i);
        }
        while (start < end && s[start] == s[end])
        {
            start++;
            end--;
        }
        // cout<<start<<" "<<end<<endl;
        string temp = string(s.rbegin(), s.rend());
        if ((s == temp && k == 0) || st.size() == 1)
        {
            cout << "NO" << endl;
        }
        else if (k == 0 && s[end] < s[start])
        {
            cout << "NO" << endl;
        }
        else cout << "YES" << endl;
    }
    return 0;
}