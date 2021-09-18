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
const int inf = 1e9 + 10;

#define FOR(i, a, b) for (int i=a; i<(b); i++)
#define F0R(i, a) for (int i=0; i<(a); i++)

int gcd (int a, int b) { while (b) { a %= b; swap(a, b); } return a; }
int lcm (int a, int b) { return a / gcd(a, b) * b; }

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t, n, rmin = inf, bp = 0;
    cin >> t;
    while (t--) {
        bp = 0; rmin = inf;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        for (int j = n-1; j >= 0; j--) {
            if (j < (n-1)) {
                if (v[j] > rmin) {
                    bp++;
                }
            }
           rmin = min(rmin, v[j]);
        }
        cout << bp << endl;
    }
    return 0;
}