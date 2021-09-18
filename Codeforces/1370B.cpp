// Reach CF pupil by [2021 Dec 31]

#include <iostream>
#include <iomanip>
#include <fstream>
#include <vector>
#include <array>
#include <algorithm>
#include <utility>
#include <map>
#include <queue>
#include <set>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <numeric>

using namespace std;

#define ll long long
#define ld long double
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
#define mp make_pair
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define fi first
#define se second
#define pii pair<int, int>
#define endl "\n"

#define vi vector<int>
#define vs vector<string>
#define vc vector<char>
#define vb vector<bool>
#define vvi vector<vector<int> >
#define vll vector<long long>

const int inf = 1e9 + 5;
const int MOD = 1e9 + 7;

#define FOR(i, a, b) for (int i=a; i<(b); i++)
#define F0R(i, a) for (int i=0; i<(a); i++)

void solve() {
    int n; cin >> n;
    vi v(2*n); vi odd, even;
    F0R(in, 2*n) {
        cin >> v[in];
        if (v[in] % 2 == 0) {
            even.pb(in + 1);
        } else {
            odd.pb(in + 1);
        }
    }
    vector< pii > ans;
    pii p;
    for (int i = 0; i < sz(odd) - 1; i += 2) {
        p = mp(odd[i], odd[i+1]);
        ans.pb(p);
    }
    for (int i = 0; i < sz(even) - 1; i += 2) {
        p = mp(even[i], even[i+1]);
        ans.pb(p);
    }
    for (int i = 0; i < n-1; i++) {
        cout << ans[i].fi << " " << ans[i].se << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}