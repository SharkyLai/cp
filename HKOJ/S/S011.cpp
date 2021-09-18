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
    return x.se < y.se;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    ll n; cin >> n; vector<pair<ll, ll> > v(n);
    F0R(i, n) {
        cin >> v[i].fi >> v[i].se;
    }
    vector<pair<ll, ll> > tmp = v;
    sort(all(v), cmp); ll t = v[0].se; ll cnt = 1; vll ans;
    F0R(i, n) {
        if (tmp[i].fi == v[0].fi && tmp[i].se == v[0].se) {
            ans.pb(i + 1);
            break;
        }
    }
    for (ll i = 1; i < n; i++) {
        if (t <= v[i].fi) {
            t = v[i].se; cnt++;
            F0R(j, n) {
                if (tmp[j].fi == v[i].fi && tmp[j].se == v[i].se) {
                    ans.pb(j + 1);
                    break;
                }
            }
        }
    }
    cout << sz(ans) << endl;
    sort(all(ans));
    F0R(i, sz(ans)) cout << ans[i] << endl;
    return 0;
}