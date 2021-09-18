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

int diff(string s) {
    if (s[0] == 'P') return 0;
    if (s[0] == 'E') return 60 * 3;
    if (s[0] == 'G') return 60 * 8;
    if (s[0] == 'I') return 60 * 13 + 30;
    if (s[0] == 'N') return 60 * 13 + 45;
    if (s[0] == 'H') return 60 * 16;
    if (s[0] == 'J') return 60 * 17;
    if (s[0] == 'A') return 60 * 18 + 30;
    if (s[2] == 'T') return 60;
    return 60 * 11;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    ll h, m; cin >> h >> m; string s, t; cin >> s >> t;
    ll x = h * 60 + m + 60 * 24;
    x -= diff(s);
    x += diff(t);
    ll a1 = (x / 60) % 24;
    ll a2 = (x % 60);
    if (a1 < 10) {
        cout << 0 << a1 << " ";
    } else {
        cout << a1 << " ";
    }
    if (a2 < 10) {
        cout << 0 << a2 << endl;
    } else {
        cout << a2 << endl;
    }
    return 0;
}