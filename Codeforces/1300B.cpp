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

void solve() {
    ll n; cin >> n; vi a(n); bool flag = false;
    F0R(in, n) {
        cin >> a[in];
    }
    FOR(i, 1, n) {
        if (abs(a[i] - a[i-1]) >= 2) {
            cout << "YES" << endl;
            cout << i << " " << i + 1 << endl;
            flag = true;
            break;
        }
    }
    if (!flag) {
        cout << "NO" << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t; cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}