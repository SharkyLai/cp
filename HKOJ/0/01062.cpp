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

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    string a, b; cin >> a >> b; vll er; vll er2;
    string c = a, d = b;
    for (int i = 0; i < a.length(); i++) {
        if (isupper(a[i])) {
            c[i] += 32;
        }
        if (!islower(a[i]) && !isupper(a[i])) {
            er.pb(i);
        }
    }
    for (int i = 0; i < b.length(); i++) {
        if (isupper(b[i])) {
            d[i] += 32;
        }
        if (!islower(b[i]) && !isupper(b[i])) {
            er2.pb(i);
        }
    }
    /*F0R(i, sz(er)) {
        cout << er[i] << " ";
    }
    cout << endl;
    F0R(i, sz(er2)) {
        cout << er2[i] << " ";
    } */
    ll op = -1; ll op2 = -1;
    for (int i = 0; i < sz(er); i++) {
        op++;
        c.erase(c.begin() + er[i] - op);
    }
    for (int i = 0; i < sz(er2); i++) {
        op2++;
        d.erase(d.begin() + er2[i] - op2);
    }
    // cout << c << " " << d << endl;
    if (c < d) {
        cout << a << " is less than " << b;
    } else if (c == d) {
        cout << a << " is equal to " << b;
    } else {
        cout << a << " is greater than " << b;
    }
    return 0;
}