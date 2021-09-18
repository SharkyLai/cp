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

#define si set<int>
#define sll set<ll>

const int inf = 1e9 + 5;
const int MOD = 1e9 + 7;

#define FOR(i, a, b) for (int i=a; i<(b); i++)
#define F0R(i, a) for (int i=0; i<(a); i++)

void solve() {
    int n; cin >> n; vi v(n); int m = -1; vs ans(n+1);
    F0R(i, n) {
        cin >> v[i];
        m = max(m, v[i]);
    }
    m++;
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= m; j++) {
            if (i == 0) {
                ans[i] += 'a';
            } else {
                if (j < v[i-1]) {
                    ans[i] += ans[i-1][j];
                } else {
                    if ('z' != ans[i-1][j]) {
                        ans[i] += 'z';
                    } else {
                        ans[i] += 'y';
                    }
                }
            }
        }
    }
    for (int i = 0; i <= n; i++) {
        cout << ans[i] << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    ll t; cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}