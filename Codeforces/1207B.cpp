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

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    ll n, m, k = 0, cnt = 0; cin >> n >> m; int a[n+5][m+5], b[n+5][m+5]; vi x1; vi y1;
    FOR(i, 1, n+1) {
        FOR(j, 1, m+1) {
            cin >> a[i][j];
            if (a[i][j] == 1) {
                cnt++;
            }
        }
    }
    for (int x = 1; x < n; x++) {
        for (int y = 1; y < m; y++) {
            if (a[x][y] == 1 && a[x+1][y] == 1 && a[x][y+1] == 1 && a[x+1][y+1] == 1) {
                k++;
                // cout << x << " " << y << endl;
                b[x][y] = 1; b[x+1][y] = 1; b[x][y+1] = 1; b[x+1][y+1] = 1;
                x1.pb(x);
                y1.pb(y);
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (a[i][j] != b[i][j]) {
                cout << -1 << endl;
                return 0;
            }
        }
    }
        cout << k << endl;
        for (int i = 0; i < sz(x1); i++) {
            cout << x1[i] << " " << y1[i] << endl;
        }
    return 0;
}