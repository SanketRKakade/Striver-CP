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
#define rloop(i,a,b) for(int i = a; i>=b ; i--)

const int N = 200001;
vi spf(N);
vector<bool> is_prime(N, true);

void sieve() {
    loop(i,1,N) spf[i] = i;
    is_prime[0] = is_prime[1] = 0;
    loop(i,2,N) {
        if (is_prime[i]) {
            for (int j = i; j < N; j += i) {
                if (j != i) is_prime[j] = false;
                if (spf[j] == j) spf[j] = i;
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    sieve();

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vi p(n + 1), q(n + 1);
        p[1] = 1;

        vi fixed_p, swap_p;
        for (int i = 2; i <= n; i++) {
            if (spf[i] == i) {
                if (2 * i > n)
                    p[i] = i, fixed_p.pb(i);
                else swap_p.pb(i);
            }
        }

        for (int x : swap_p) {
            if (!p[x] && 2 * x <= n && !p[2 * x]) {
                p[x] = 2 * x;
                p[2 * x] = x;
            }
        }

        vi free_id;
        loop(i, 1, n + 1) if (!p[i]) free_id.pb(i);
        loop(i, 1, n + 1) q[i] = i;

        map<int, vi> g;
        for (int x : free_id) g[spf[x]].pb(x);

        vi left;
        for (auto &[f, v] : g) {
            while (v.size() >= 2) {
                int a = v.back(); v.pop_back();
                int b = v.back(); v.pop_back();
                swap(q[a], q[b]);
            }
            if (!v.empty()) left.pb(v[0]);
        }

        if (!left.empty()) {
            map<int, set<int>> on;
            vector<set<int>> facs(left.size());

            loop(i, 0, left.size()) {
                int x = left[i], tmp = x;
                while (tmp > 1) {
                    int f = spf[tmp];
                    facs[i].insert(f);
                    tmp /= f;
                    while (tmp % f == 0) tmp /= f;
                }
                for (int f : facs[i]) on[f].insert(i);
            }

            vector<bool> used(left.size(), true);

            loop(i, 0, left.size()) {
                if (!used[i]) continue;
                for (int f : facs[i]) {
                    for (int j : on[f]) {
                        if (j == i || !used[j]) continue;
                        int a = left[i], b = left[j];
                        swap(q[a], q[b]);
                        used[i] = used[j] = 0;
                        for (int ff : facs[i]) on[ff].erase(i);
                        for (int ff : facs[j]) on[ff].erase(j);
                        goto next;
                    }
                }
                next:;
            }
        }

        for (int i : free_id) p[i] = q[i];
        loop(i, 1, n + 1) {
            cout << p[i] << (i == n ? '\n' : ' ');
        }
    }

    return 0;
}
