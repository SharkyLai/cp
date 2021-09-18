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

ll findDist(ll x1, ll y1, ll x2, ll y2) {
    ll dist;
    dist = (abs(x2 - x1) * abs(x2 - x1) + abs(y2 - y1) * abs(y2 - y1));
    return dist;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    ll n, ans = -1; cin >> n; vll a(n); vll b(n);
    F0R(ain, n) {
        cin >> a[ain];
    }
    F0R(bin, n) {
        cin >> b[bin];
    }
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            ans = max(ans, findDist(a[i], b[i], a[j], b[j]));
        }
    }
    cout << ans << endl;
    return 0;
}