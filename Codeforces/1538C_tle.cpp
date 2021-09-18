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
const int inf = 1e9 + 10;

#define FOR(i, a, b) for (int i=a; i<(b); i++)
#define F0R(i, a) for (int i=0; i<(a); i++)

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t, n, l, r, cnt = 0;
    cin >> t;
    while (t--) {
        cnt = 0;
        cin >> n >> l >> r;
        vector<int> v(n);
        for (int in = 0; in < n; in++) {
            cin >> v[in];
        }
        for (int i = 0, j = 1; i < n;) {
            if (v[i] + v[j] <= r && v[i] + v[j] >= l) {
                cnt++;
            }
            if (j >= n-1) {
                i++;
                j = i+1;
            } else {
                j++;
            }
            if (j >= n) {
                cout << cnt << endl;
                break;
            }
        }
    }
}