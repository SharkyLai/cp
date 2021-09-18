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
#include <numeric>

using namespace std;

#define ll long long
#define ld long double
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
#define mp make_pair
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define fi first
#define se second
#define pii pair<int, int>
#define endl "\n"

#define vi vector<int>
#define vs vector<string>
#define vc vector<char>
#define vb vector<bool>
#define vvi vector<vector<int> >
#define vll vector<long long>

#define si set<int>
#define sll set<ll>

const int inf = 1e9 + 5;
const int MOD = 1e9 + 7;

#define FOR(i, a, b) for (int i=a; i<(b); i++)
#define F0R(i, a) for (int i=0; i<(a); i++)

void solve() {
    ll n, x; cin >> n >> x; vi v(n); bool flag = true; ll even = 0, odd = 0;
    F0R(i, n) {
        cin >> v[i];
        if (v[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }   
    }
    if (odd >= 1) {
        if (x % 2 == 0) {
            if (even > 0) {
                cout << "Yes" << endl;
                return;
            } else {
                cout << "No" << endl;
                return;
            }
        } else {
            if (n > x) {
                if (odd <= (n - x) && odd % 2 == 0) {
                    cout << "No" << endl;
                    return;
                } else {
                    cout << "Yes" << endl;
                    return;
                }
            } else {
                if (odd % 2 == 1) {
                    cout << "Yes" << endl;
                    return;
                } else {
                    cout << "No" << endl;
                    return;
                }
            }
        } 
        /*if (odd <= x) {
            if (odd % 2 == 1) {
                cout << "Yes" << endl;
                return;
            }
        } */
    }
    cout << "No" << endl;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    ll t; cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}