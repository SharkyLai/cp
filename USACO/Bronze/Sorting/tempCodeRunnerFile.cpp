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

int res(vi p) {
    int rem = 0;    
    for (int i = 0; i < p.size()/2; i++) {
        rem += p[2*i+1] - p[2*i];
    }
    return rem;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n, ans = inf; cin >> n;
    ll cnt = 0;
    int k = 2*n;
    vi v(k);
    for (int in = 0; in < k; in++) {
        cin >> v[in];
    }
    sort(all(v));
    for (int i = 0; i < k; i++) {
        for (int j = i+1; j < k; j++) {
            vi v1 = v;
            v1.erase(v1.begin() + i);
            v1.erase(v1.begin() + j);
            ans = min(ans, res(v1));
        }
    }
    cout << ans << endl;
    return 0;
}