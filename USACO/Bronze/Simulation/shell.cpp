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
    freopen("shell.in", "r", stdin);
	freopen("shell.out", "w", stdout);
    int n, shells[3], answer[3], ans;
    cin >> n;
    for (int i = 0; i < 3; i++) {
        shells[i] = i;
    }
    for (int i = 0; i < n; i++) {
        int a, b, g;
        cin >> a >> b >> g;
        a--;
        b--;
        g--;
        swap(shells[a], shells[b]);
        answer[shells[g]]++;
    }
    ans = max(answer[0], answer[1]);
    ans = max(ans, answer[2]);
    cout << ans << endl;
    return 0;
}