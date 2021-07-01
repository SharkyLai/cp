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

#define FOR(i, a, b) for (int i=a; i<(b); i++)
#define F0R(i, a) for (int i=0; i<(a); i++)

int gcd (int a, int b) { while (b) { a %= b; swap(a, b); } return a; }
int lcm (int a, int b) { return a / gcd(a, b) * b; }

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t, y, x, ans;
    // y = row, x = column
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> y >> x;
        ll z = max(y, x);
        // ll z2 = z*z;
        ans = (z-1)*(z-1);
        if (z%2 == 0) {
            /*if (x == z) {
                ans = (z-1)*(z-1) + y;
            } else if (y == z) {
                ans = (z2 - (z-1)*(z-1) + 1)/2 + (z-1)*(z-1) + abs((z-x));
            } */
            ans += y + z - x;
        } else if (z%2 == 1) {
            /* if (y == z) {
                ans = (z-1)*(z-1) + x;
            } else if (x == z) {
                ans = (z2 - (z-1)*(z-1) + 1)/2 + (z-1)*(z-1) + abs(z-y);
            } */
            ans += x + z - y;
        }
        cout << ans << endl;
    }
    return 0;
}