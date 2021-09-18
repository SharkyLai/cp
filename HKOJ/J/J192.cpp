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
#include <climits>

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

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    ll n, k; cin >> n >> k; vll v(n); vll ps(n, 0);
    F0R(i, n) {
        cin >> v[i]; 
    }
    sort(all(v));
    for (ll i = 0; i < n; i++) {
        if (i > 0) {
            ps[i] += ps[i-1] + v[i];
        } else {
            ps[i] = v[i];
        }
    }
    if (k % 2 == 1) {
        ll m = (k-1)/2; ll bm = m, bc = LLONG_MIN;
        for (ll i = m; i < n - m; i++) {
            ll tmp = 0;
            tmp += ps[m-1];
            tmp += ps[i+m] - ps[i];
            ll change = v[i] * (k - 1) - tmp;
            if (change > bc) {
                bm = i; bc = change;
            }
        }
        for (ll i = 0; i < m; i++) {
            cout << v[i] << " ";
        }
        cout << v[bm] << " ";
        for (ll i = 0; i < m; i++) {
            cout << v[bm + i + 1] << " ";
        }
        cout << endl;
    } else {
        ll m = (k / 2) - 1; ll bm = m; ld bc = LLONG_MIN;
        for (ll i = m; i < n - m - 1; i++) {
            ll tmp = 0;
            tmp += ps[m-1];
            tmp += ps[i+m+1] - ps[i+1];
            ld change = ((ld) (v[i] + v[i+1]) / 2) * (k - 2) - tmp;
            if (change > bc) {
                bm = i; bc = change;
            }
        }
        for (ll i = 0; i < m; i++) {
            cout << v[i] << " ";
        }
        cout << v[bm] << " " << v[bm+1] << " ";
        for (ll i = 0; i < m; i++) {
            cout << v[bm + i + 2] << " ";
        }
        cout << endl;
    }
    return 0;
}