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
    long long t, n, ans = 0;
    int arr[n];
    cin >> t;
    bool flag;
    while (t--) {
        ans = 0;
        cin >> n;
        int mn = inf;
        for (int i = 0; i < n; i++) {
            cin >> arr[i]; ans += (arr[i] <= 0);
        }
        sort(arr, arr + n);
        for (int j = 0; j < n; j++) {
            if (arr[j] > 0) {
                    mn = min(mn, arr[j]);
            }
            flag = (mn < inf);
        }
        for (int i = 1; i < n; ++i)
			if (arr[i] <= 0)
				flag &= (arr[i] - arr[i - 1] >= mn);

        if (flag) {
            cout << ans + 1 << "\n";
        } else {
            cout << ans << "\n";
        }
    }
    return 0;
}