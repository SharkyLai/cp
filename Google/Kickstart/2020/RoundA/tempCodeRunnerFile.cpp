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
    int t, n, b, ans = 0, sum = 0;
    cin >> t;
    for (int i = 0; i < t; i++) {
        ans = 0; sum = 0;
        cin >> n >> b;
        vector<int> v(n);
        for (int j = 0; j < n; j++) {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        for (int k = 0; k < n; k++) {
            while (sum < n) {
                sum += v[i];
                ans++;
            }
        }
        cout << "Case #" << i+1 << ": " << ans;
    }
    return 0;
}