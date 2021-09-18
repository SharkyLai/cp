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
    ll n, m, k, count = 0;
    cin >> n >> m >> k;
    vector<int> a(n);
    vector<int> b(m);
    for (int ai = 0; ai < n; ai++) {
        cin >> a[ai];
    }
    for (int bi = 0; bi < m; bi++) {
        cin >> b[bi];
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    for (int i = 0, j = 0; i < n && j < m;) {
        if (abs(a[i] - b[j]) <= k)  {
            i++; j++; count++;
        } else if (a[i] > b[j]+k) {
            j++;
        } else {
            i++;
        }
    }
    cout << count << endl;
    return 0;
}