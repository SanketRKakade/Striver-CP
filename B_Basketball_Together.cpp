#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vi;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    cout << (m == 1 ? n - 1 : n * (m - 1)) << '\n';
    return 0;
}
