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
    ll n, cnt = 0; cin >> n; vi v(n+5); vi index(2*n + 1, -1);
    FOR(i, 1, n+1) {
        cin >> v[i];
        index[v[i]] = i;
    }
    for (int i = 3; i < 2*n; i++) {
        for (int j = 1; j*j <= i; j++) {
            if (i % j == 0 && j * j != i && index[i/j] != -1 && index[j] != -1 && (index[i/j] + index[j] == i)) {
                cnt++;
            }
        }
    }
    cout << cnt << "\n";
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    ll t; cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}