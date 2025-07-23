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

struct Node {
    int f0, f1;
    ll val0, val1;
};

int n;
ll k;
vector<ll> a, b;
vector<Node> tree;

Node combine(const Node &l, const Node &r) {
    Node res;
    res.f0 = (l.f0 == 0) ? r.f0 : r.f1;
    res.val0 = l.val0 + ((l.f0 == 0) ? r.val0 : r.val1);
    res.f1 = (l.f1 == 0) ? r.f0 : r.f1;
    res.val1 = l.val1 + ((l.f1 == 0) ? r.val0 : r.val1);
    return res;
}

void build(int v, int tl, int tr) {
    if (tl == tr) {
        bool chooseB0 = (a[tl] + k < b[tl]);
        bool chooseB1 = (b[tl] + k < a[tl]);
        tree[v].f0 = chooseB0;
        tree[v].val0 = chooseB0 ? b[tl] : a[tl];
        tree[v].f1 = !chooseB1;
        tree[v].val1 = tree[v].f1 ? b[tl] : a[tl];
    } else {
        int tm = (tl + tr) / 2;
        build(v * 2, tl, tm);
        build(v * 2 + 1, tm + 1, tr);
        tree[v] = combine(tree[2 * v], tree[2 * v + 1]);
    }
}

void update(int v, int tl, int tr, int pos) {
    if (tl == tr) {
        bool chooseB0 = (a[tl] + k < b[tl]);
        bool chooseB1 = (b[tl] + k < a[tl]);
        tree[v].f0 = chooseB0;
        tree[v].val0 = chooseB0 ? b[tl] : a[tl];
        tree[v].f1 = !chooseB1;
        tree[v].val1 = tree[v].f1 ? b[tl] : a[tl];
    } else {
        int tm = (tl + tr) / 2;
        if (pos <= tm) update(2 * v, tl, tm, pos);
        else update(2 * v + 1, tm + 1, tr, pos);
        tree[v] = combine(tree[2 * v], tree[2 * v + 1]);
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        a.resize(n);
        b.resize(n);
        loop(i, 0, n) cin >> a[i];
        loop(i, 0, n) cin >> b[i];

        tree.assign(4 * n, Node());
        build(1, 0, n - 1);

        int q;
        cin >> q;
        while (q--) {
            int type, pos;
            ll x;
            cin >> type >> pos >> x;
            --pos;
            if (type == 1) a[pos] = x;
            else b[pos] = x;
            update(1, 0, n - 1, pos);
            cout << tree[1].val0 << '\n';
        }
    }
    return 0;
}