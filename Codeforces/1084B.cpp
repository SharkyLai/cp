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
#define vi vector<int>
#define endl "\n"
const int inf = 1e9 + 10;
const int MOD = 1e9 + 7;

#define FOR(i, a, b) for (int i=a; i<(b); i++)
#define F0R(i, a) for (int i=0; i<(a); i++)

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    ll n, s, sum = 0, k, s1 = 0; cin >> n >> s; vi v(n);
    F0R(in, n) {
        cin >> v[in];
        sum += v[in];
    }
    if (sum < s) {
        cout << -1 << endl;
    } else if (sum == s) {
        cout << 0 << endl;
    } else {
        sort(v.begin(), v.end());
        k = v[0];
        for (int i = 1; i < n; i++) {
            s1 += v[i] - k;
        }
        if (s1 >= s) {
            cout << k << endl;
        } else {
            s -= s1;
            k -= s % n;
            s -= s % n;
            k -= s/n;
            cout << k << endl;
        }
    }
    return 0;
}