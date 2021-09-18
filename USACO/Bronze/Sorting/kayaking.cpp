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
    for (int q = 0; q < p.size()/2; q++) {
        rem += p[2*q+1] - p[2*q];
    }
    return rem;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n, ans = inf; cin >> n;
    int k = 2*n;
    vi v(k);
    for (int in = 0; in < k; in++) {
        cin >> v[in];
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++) {
        for (int j = i+1; j < v.size(); j++) {
            vi v1 = v;
            v1.erase(v1.begin() + j);
            v1.erase(v1.begin() + i);
            ans = min(ans, res(v1));
        }
    }
    cout << ans << endl;
    return 0;
}