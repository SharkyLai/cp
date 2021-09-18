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
const int inf = 1e9 + 10;

#define FOR(i, a, b) for (int i=a; i<(b); i++)
#define F0R(i, a) for (int i=0; i<(a); i++)

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t, n, l, r, a, b;
    cin >> t;
    while (t--) {
        cin >> n >> l >> r;
        vector<int> v(n);
        F0R(in, n) {
            cin >> v[in];
        }
        ll ans;
        sort(v.begin(), v.end());
        F0R(i, n) {
            a = ub(v.begin(), v.end(), r - v[i]) - v.begin();
            b = lb(v.begin(), v.end(), l - v[i]) - v.begin();
            ans = a-b;
            if (l <= 2 * v[i] && 2 * v[i] <= r) {
                ans--;
            }
        }
        cout << ans / 2 << endl;
    }
    return 0;
}