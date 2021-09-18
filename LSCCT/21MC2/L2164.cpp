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
    ll n, d, k;
    cin >> n >> d >> k;
    vector<int> v(n);
    for (int input = 0; input < n; input++) {
        cin >> v[input];
    }
    ll ans = 0, sum = 0;
    vector<int> count(d);
    count[0] = 1;
    for (int i : v) {
        sum = (sum + i % d + d) % d;
        ans += count[sum];
        ++count[sum];
    }
    return 0;
}