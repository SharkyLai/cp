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
    int x, y; cin >> x >> y; string a, b; cin >> a >> b; bool flag; ll a1 = x; ll a2 = y;
    map<string, ld> mp; mp["PST"] = -8; mp["MST"] = -7; mp["EST"] = -5; mp["GMT"] = 0; mp["MSK"] = 3; mp["IST"] = 5.5; mp["NPT"] = 5.75; mp["HKT"] = 8; mp["JST"] = 9; mp["ACDT"] = 10.5;
    ld ch = mp[b] - mp[a];
    flag = (floor(ch) == ch);
    if (flag) {
        a1 = x + ch;
        if (a1 > 23) {
            a1 -= 24;
        } else if (a1 < 0) {
            a1 += 24;
        }
        if (a1 < 10) {
            cout << 0 << a1 << " ";
        } else {
            cout << a1 << " ";
        }
        if (y < 10) {
            cout << 0 << y << endl;
        } else {
            cout << y << endl;
        }
    } else {
        a1 = x + floor(ch);
        if (a1 > 23) {
            a1 -= 24;
        } else if (a1 < 0) {
            a1 += 24;
        }
        ld tmp = ch - floor(ch);
        a2 += (tmp * 60);
        if (a2 > 60) {
            a1++;
            a2 -= 60;
        } else if (a2 < 0) {
            a1--;
            a2 += 60;
        }
        if (a1 > 23) {
            a1 -= 24;
        } else if (a1 < 0) {
            a1 += 24;
        }
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
    }
    return 0;
}