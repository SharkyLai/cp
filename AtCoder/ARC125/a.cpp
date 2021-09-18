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
    ll n, m; cin >> n >> m; vi s(n), t(m); ll cnt = 0, ans = 0, fir = -1, las = -1, dis;
    F0R(i, n) {
        cin >> s[i];
        if (s[0] == 0) {
            if (s[i] == 1) {
                if (fir == -1) {
                    fir = i;
                    las = fir;
                } else {
                    las = i;
                }
            }
        } else {
            if (s[i] == 0) {
                if (fir == -1) {
                    fir = i;
                } else {
                    las = i;
                }
            }
        }
    }
    if (fir == -1) {
        cout << -1 << endl;
        return 0;
    }
    F0R(i, m) {
        cin >> t[i];
        if (i > 0) {
            if (t[i] != t[i-1]) cnt++;
        }
    }
    dis = min(fir, abs(n - las));
    ans = m + dis + cnt - 1;
    cout << ans << endl;
    return 0;
}