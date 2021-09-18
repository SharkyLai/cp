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
void usaco(string prob) {
    freopen((prob + ".in").c_str(), "r", stdin);
    freopen((prob + ".out").c_str(), "w", stdout);
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    // usaco("magic");
    ll n; cin >> n; pair<ll, ll> pos = make_pair(0, (n - 1) / 2);
    ll a[n][n]; 
    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < n; j++) {
            a[i][j] = -1;
        }
    }
    a[0][(n - 1) / 2] = 1;
    for (ll i = 2; i <= n * n; i++) {
        if (pos.fi == 0 && pos.se != (n - 1)) {
            a[n - 1][pos.se + 1] = i;
            pos.fi = n - 1;
            pos.se += 1;
        } else if (pos.fi != 0 && pos.se == (n - 1)) {
            a[pos.fi - 1][0] = i;
            pos.fi -= 1;
            pos.se = 0;
        } else if (pos.fi == 0 && pos.se == (n - 1)) {
            a[pos.fi + 1][pos.se] = i;
            pos.fi += 1;
        } else if (pos.fi != 0 && pos.se != (n - 1)) {
            if (a[pos.fi - 1][pos.se + 1] == -1) {
                a[pos.fi - 1][pos.se + 1] = i;
                pos.fi -= 1; 
                pos.se += 1;
            } else {
                a[pos.fi + 1][pos.se] = i;
                pos.fi += 1;
            }
        }
    }
    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}