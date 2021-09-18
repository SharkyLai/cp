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

using namespace std;

#define ll long long
#define ld long double
#define all(x) x.begin(), x.end()
#define MOD 1000000007
#define sz(x) (int)(x).size()
#define mp make_pair
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define fi first
#define se second
#define pii pair<int, int>
#define vi vector<int>
#define endl "\n"
const int inf = 1e9 + 10;

#define FOR(i, a, b) for (int i=a; i<(b); i++)
#define F0R(i, a) for (int i=0; i<(a); i++)

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    freopen("speeding.in", "r", stdin);
	freopen("speeding.out", "w", stdout);
    ll n, m, l, s; cin >> n >> m;
    int d = -999;
    vi v1; vi v2;
    for (int i = 0; i < n; i++) {
        cin >> l >> s;
        for (int j = 0; j < l; j++) {
            v1.pb(s);
        }
    }
    for (int k = 0; k < m; k++) {
        cin >> l >> s;
        for (int a = 0; a < l; a++) {
            v2.pb(s);
        }
    }
    for (int b = 0; b < 100; b++) {
        d = max(d, v2[b] - v1[b]);
        if (d < 0) {
            d = 0;
        }
    }
    cout << d << endl;
    return 0;
}