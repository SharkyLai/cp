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

#define FOR(i, a, b) for (ll i=a; i<(b); i++)
#define F0R(i, a) for (ll i=0; i<(a); i++)

void read(vector<int> v) {
    F0R(i, sz(v)) {
        cin >> v[i];
    }
}

bool isPrime(int num){
    if (num == 1) return false;
        for (int i = 2; i<=sqrt(num); i++){
            if (num % i == 0) return false;
        }
    return true;
}

void solve() {
    ll k, n, m; cin >> k >> n >> m; vll a(n); vll b(m); vll ans; ll cnt = k; bool ok = true;
    for (int in = 0; in < n; in++) {
        cin >> a[in];
    }
    for (int in = 0; in < m; in++) {
        cin >> b[in];
    }
    for (ll i = 0, j = 0; i != n || j != m;) {
        if (i < n) {
            if (a[i] == 0) {
                cnt++; ans.pb(a[i]); i++;
            } else if (a[i] > 0 && cnt >= a[i]) {
                ans.pb(a[i]); i++;
            }
        } else if (j < m) {
            if (b[j] == 0) {
                cnt++; ans.pb(b[j]); j++; 
            } else if (b[j] > 0 && cnt >= b[j]) {
                ans.pb(b[j]); j++;
            }
        } else {
            cout << -1 << endl;
            ok = false;
            return;
        }
    }
    if (ok) {
        for (ll p = 0; p < sz(ans); p++) {
            cout << ans[p] << " ";
        }
        cout << endl;
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