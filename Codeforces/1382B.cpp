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
    ll n, d = -1; cin >> n; vll a(n);
    F0R(in, n) {
        cin >> a[in];
    }
    F0R(i, n) {
        if (a[i] != 1) {
            d = i;
            d++;
            break;
        }
    }
    if (d == -1) {
        if (n % 2 == 0) {
            cout << "Second" << endl;
        } else {
            cout << "First" << endl;
        }
        return;
    } else {
        if (d % 2 == 1) {
            cout << "First" << endl;
        } else {
            cout << "Second" << endl;
        }
        return;
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}