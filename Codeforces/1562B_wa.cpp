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
    ll k; cin >> k; string s; cin >> s;
    vi cnt(9, 0);
    for (int i = 0; i < k; i++) {
        cnt[s[i]]++;
    }
    if (k >= 10) {
        for (int i = 0; i < k; i++) {
            if (s[i] == '1' || s[i] == '4' || s[i] == '6' || s[i] == '8' || s[i] == '9') {
                cout << 1 << endl;
                cout << s[i] << endl;
                return;
            }
        }
        cout << 2 << endl;
        for (int i = 1; i <= 9; i++) {
            if (cnt[i] >= 2) {
                cout << cnt[i] << cnt[i] << endl;
                return;
            }
        }
        cout << 2 << endl;
    } else {
        for (int i = 0; i < k; i++) {
            if (s[i] == '1' || s[i] == '4' || s[i] == '6' || s[i] == '8' || s[i] == '9') {
                cout << 1 << endl;
                cout << s[i] << endl;
                return;
            }
        }
        for (int i = 0; i < k; i++) {
            if (s[i] == '2' || s[i] == '5') {
                if (i > 0) {
                    cout << 2 << endl;
                    cout << s[i-1];
                    cout << s[i] << endl;
                    return;
                }
                
            }
        }
        vi cnt(9, -1); cnt[s[0]];
        for (int i = 1; i < k; i++) {
            if (s[i] == '3') {
                cout << 2 << endl;
                cout << s[i-1] << 3 << endl;
                return;
            } else if (s[i] == '7') {
                cout << 2 << endl;
                cout << s[i-1] << 7 << endl;
                return;
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