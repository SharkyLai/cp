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
#define endl "\n"
const int inf = 1e9 + 10;

#define FOR(i, a, b) for (int i=a; i<(b); i++)
#define F0R(i, a) for (int i=0; i<(a); i++)

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll n, m; cin >> n >> m;
    int ans = inf; 
    vi a(n); vi b(m);
    for (int ain = 0; ain < n; ain++) {
        cin >> a[ain];
    }
    for (int bin = 0; bin < n; bin++) {
        cin >> b[bin];
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    for (int i = 0, j = 0; i < n, j < m;) {
        ans = min(ans, abs(a[i] - b[j]));
        if (a[i] > b[j]) {
            j++;
            ans = min(ans, abs(a[i] - b[j]));
        }
        if (a[i] < b[j]) {
            i++;
            ans = min(ans, abs(a[i] - b[j]));
        }
        if (a[i] == b[j]) {
            ans = 0;
            break;
        }
    }
    // ans = min(ans, abs(a[n-1] - b[m-1]));
    cout << ans << endl;
    return 0;
}