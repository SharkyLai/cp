// Reach CF specialist by [2021 Dec 31]

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

const int inf = 1e9 + 10;
const int MOD = 1e9 + 7;

#define FOR(i, a, b) for (int i=a; i<(b); i++)
#define F0R(i, a) for (int i=0; i<(a); i++)

void solve() {
    ll n; cin >> n; bool flag = true; vi a(n); vll b(n); vi ok(2, 0);
    F0R(ain, n) {
        cin >> a[ain];
    }
    F0R(bin, n) {
        cin >> b[bin];
    }
    F0R(i, n) {
        if (a[i] > b[i] && !ok[0]) {
            flag = false;
            break;
        } else if (a[i] < b[i] && !ok[1]) {
            flag = false;
            break;
        }
        if (a[i] == -1) {
            ok[0] = 1;
        } else if (a[i] == 1) {
            ok[1] = 1;
        }
    }
    if (flag) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
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