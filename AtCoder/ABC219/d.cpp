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

bool cmp(pair<ll, ll> x, pair<ll, ll> y) {
    return x.fi + x.se < y.fi + y.se;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    ll n, x, y; cin >> n >> x >> y; vector<pair<ll, ll> > v(n); ll suma = 0; ll sumb = 0; ll cnt = n;
    F0R(i, n) {
        cin >> v[i].fi >> v[i].se;
        suma += v[i].fi; sumb += v[i].se;
    }
    // cout << suma << sumb << endl;
    if (suma < x || sumb < y) {
        cout << -1 << endl;
        return 0;
    }
    sort(all(v), cmp);
    while (1) {
        bool flag = true;
        for (ll i = 0; i < cnt; i++) {
            if (suma - v[i].fi >= x && sumb - v[i].se >= y) {
                suma -= v[i].fi;
                sumb -= v[i].se;
                v.erase(v.begin() + i);
                i--; cnt--;
                flag = false;
            }
        }
        if (flag) {
            break;
        }
    }
    cout << cnt << endl;
    return 0;
}