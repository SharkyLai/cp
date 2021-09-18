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
    ll n; cin >> n;
    ll wtf, on9;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (i >= 2) {
            wtf = v[i] - v[i-1];
            on9 = v[i-1] - v[i-2];
            if (on9 > wtf) {
                cout << i << endl;
                return 0;
            }
        }
    }
    cout << -1 << endl;
    /*ll n, ans = -1;
    cin >> n;
    vector<int> v(n);
    vector<int> diff;
    for (ll i = 0; i < n; i++) {
        cin >> v[i];
        if (i > 0) {
            diff.pb(v[i] - v[i-1]);
        }
    }
    for (ll j = 0; j < n - 1; j++) {
        if (j > 0 && diff[j] < diff[j-1]){
            ans = j + 1;
            break;
        }
    }
    cout << ans << endl;
    return 0; */
}