#include <bits/stdc++.h>
using namespace std;

// ── Type aliases ────────────────────────────────────────────────────────────
typedef long long           ll;
typedef unsigned long long  ull;
typedef pair<int,int>       pii;
typedef pair<ll,ll>         pll;
typedef vector<int>         vi;
typedef vector<ll>          vl;
typedef vector<pii>         vpii;

// ── Macros ──────────────────────────────────────────────────────────────────
#define pb          push_back
#define mp          make_pair
#define all(x)      (x).begin(), (x).end()
#define rall(x)     (x).rbegin(), (x).rend()
#define sz(x)       (int)(x).size()
#define F           first
#define S           second
#define rep(i,a,b)  for(int i=(a); i<(b); i++)
#define per(i,a,b)  for(int i=(b)-1; i>=(a); i--)

// ── Constants ────────────────────────────────────────────────────────────────
const int   MOD  = 1e9 + 7;
const int   INF  = 1e9;
const ll    LINF = 1e18;

// ── Fast I/O ─────────────────────────────────────────────────────────────────
void fastio() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

// ── Solution ─────────────────────────────────────────────────────────────────
// Given an array of n integers and a target, print indices of the two numbers
// that add up to target (0-indexed). Guaranteed exactly one solution.
// Input: n target
//        a[0] a[1] ... a[n-1]
void solve() {
    int n, target;
    cin >> n >> target;
    vi a(n);
    rep(i, 0, n) cin >> a[i];

    unordered_map<int, int> seen; // value → index
    rep(i, 0, n) {
        int complement = target - a[i];
        if (seen.count(complement)) {
            cout << seen[complement] << " " << i << "\n";
            return;
        }
        seen[a[i]] = i;
    }
}

int main() {
    fastio();

    int t = 1;
    // cin >> t;       // uncomment for multiple test cases
    while (t--) solve();

    return 0;
}
