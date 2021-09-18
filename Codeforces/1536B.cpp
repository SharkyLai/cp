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

void read(vector<ll> v) {
    F0R(i, sz(v)) {
        cin >> v[i];
    }
}

bool isPrime(int num){
    if (num == 1) return false;
        for (int i = 2; i<=sqrt(num); i++){
            if (num % i == 0) return false;
        }
    return true;
}

void solve() {
    ll n; cin >> n; string s; cin >> s;
    for (char c1 = 'a'; c1 <= 'z'; c1++) {
        bool ok = false;
        for (int i = 0; i < n; i++) {
            if (s[i] == c1) {
                ok = true;
            }
        }
        if (!ok) {
            cout << c1 << endl;
            return;
        }
    }
    for (char c1 = 'a'; c1 <= 'z'; c1++) {
        for (char c2 = 'a'; c2 <= 'z'; c2++) {
            bool ok = false;
            for (int i = 0; i < n-1; i++) {
                if (s[i] == c1 && s[i+1] == c2) {
                    ok = true;
                }
            }
            if (!ok) {
                cout << c1 << c2 << endl;
                return;
            }
        }
    }
    for (char c1 = 'a'; c1 <= 'z'; c1++) {
        for (char c2 = 'a'; c2 <= 'z'; c2++) {
            for (char c3 = 'a'; c3 <= 'z'; c3++) {
                bool ok = false;
                for (int i = 0; i < n-2; i++) {
                    if (s[i] == c1 && s[i+1] == c2 && s[i+2] == c3) {
                        ok = true;
                    }
                }
                if (!ok) {
                    cout << c1 << c2 << c3 << endl;
                    return;
                }
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    ll t; cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}