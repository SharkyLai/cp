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
    ll n, m, ans = 0;
    cin >> n >> m;
    int arr[m-1];
    bool first = false;
    for (int i = 0; i < m; i++) {
        cin >> arr[i];
    }
    for (int j = 1; j <= m; j++) {
        if (j != m) {
            if (arr[j-1] > arr[j]) {
                ans += n;
                if (first == false) {
                    ans -= 1;
                }
                first = true;
            }
        } else if (j == m) {
            // if (arr[j-2] <= arr[j-1]) {
                ans += arr[j-1];
                if (first == false) {
                    ans -= 1;
                }
                first = true;
            // }
        }
    }
    cout << ans << endl;
    return 0;
}