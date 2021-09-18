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
    int t, n, a1, a2, a3;
    cin >> t;
    while (t--) {
        cin >> n;
        if (n == 1 || n == 2 || n == 4) {
            cout << -1 << endl;
        } else {
            if (n % 3 == 0) {
                cout << n/3 << " " << 0 << " " << 0 << endl;
            } else if (n % 3 == 1) {
                cout << (n-7)/3 << " " << 0 << " " << 1 << endl;
            } else if (n % 3 == 2) {
                cout << (n-5)/3 << " " << 1 << " " << 0 << endl;
            }
        }
    }
    return 0;
}