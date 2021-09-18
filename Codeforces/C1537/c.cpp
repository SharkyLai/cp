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
    ll t, n, d, bd = inf, end1, end2;
    bool eo = true;
    bool e1 = false;
    bool e2 = false;
    cin >> t;
    while (t--) {
        bd = inf;
        e1 = false;
        e2 = false;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        vector<int> s = v;
        vector<int> a(n);
        sort(s.begin(), s.end());
        for (int j = 1; j < n; j++) {
            d = s[j] - s[j-1];
            if (d < bd) {
                end1 = s[j-1];
                end2 = s[j];
            }
            bd = min(bd, d);
        }
        for (int k = 0; k < n; k++) {
            if ((s[k] == end1) && (e1 == false)) {
                s.erase(s.begin() + k);
                e1 = true;
            }
        }
        for (int x = 0; x < n; x++) {
            if ((s[x] == end2) && (e2 == false)) {
                s.erase(s.begin() + x);
                e2 = true;
            }
        }
        
        cout << end1 << " ";
        if (n % 2 == 0) {
            for (int m = 0; m < (n-2)/2; m++) {
                cout << s[n-m-3] << " " << s[m] << " ";
            }
        } else if (n % 2 == 1) {
            for (int m = 0; m < (n-2)/2; m++) {
                cout << s[n-m-3] << " " << s[m] << " ";
            }
            cout << s[(n/2)-0.5] << " ";
        }
        cout << end2 << endl;
    }
    return 0;
}