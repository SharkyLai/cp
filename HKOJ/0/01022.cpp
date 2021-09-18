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
// #define mp make_pair
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

bool cmp(pair<string, string> x, pair<string, string> y) {
    return x.se > y.se;
}

bool cmp2(pair<string, string> x, pair<string, string> y) {
    if (x.se == y.se) {
        return x.fi < y.fi;
    }
    return false;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    ll n; cin >> n; vector<pair<string, string> > v(n);
    F0R(i, n) {
        cin >> ws;
        getline(cin, v[i].fi);
        cin >> ws;
        getline(cin, v[i].se);
    }
    sort(all(v), cmp);
    sort(all(v), cmp2);
    F0R(i, n) cout << v[i].fi << " " << v[i].se << endl;
    return 0;
}