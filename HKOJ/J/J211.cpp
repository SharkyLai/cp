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
        for (int i = 2; i <= sqrt(num); i++){
            if (num % i == 0) return false;
        }
    return true;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    vll v(7);
    F0R(i, 7) cin >> v[i];
    ll n; string s; cin >> n >> s;
    if (s == "cyan") {
        cout << v[0] * n << endl;
        return 0;
    } else if (s == "magenta") {
        cout << v[1] * n << endl;
        return 0;
    } else if (s == "yellow") {
        cout << v[2] * n << endl;
        return 0;
    } else if (s == "blue") {
        if (n % 2 == 0) {
            ll ans = min(v[6] * n, (v[0] + v[1]) * n / 2);
            cout << ans << endl;
        } else {
            ll ans = min(v[6] * (n - 1), ((v[0] + v[1]) * ((n - 1) / 2)));
            ans += min(v[6], v[0] + v[1]);
            cout << ans << endl;
        }
    } else if (s == "red") {
        if (n % 2 == 0) {
            ll ans = min(v[4] * n, (v[2] + v[1]) * n / 2);
            cout << ans << endl;
        } else {
            ll ans = min(v[4] * (n - 1), (v[2] + v[1]) * ((n - 1) / 2));
            ans += min(v[4], v[2] + v[1]);
            cout << ans << endl;
        }
    } else if (s == "green") {
        if (n % 2 == 0) {
            ll ans = min(v[5] * n, (v[0] + v[2]) * n / 2);
            cout << ans << endl;
        } else {
            ll ans = min(v[5] * (n - 1), (v[0] + v[2]) * ((n - 1) / 2));
            ans += min(v[5], v[0] + v[2]);
            cout << ans << endl;
        }
    } else if (s == "black") {
        if (n % 3 == 0) {
            ll ans = min(v[3] * n, (v[0] + v[2] + v[1]) * n / 3);
            ans = min(ans, (v[0] + v[4] + v[4]) * n / 3);
            ans = min(ans, (v[4] + v[5] + v[6]) * n / 3);
            ans = min(ans, (v[1] + v[5] + v[5]) * n / 3);
            ans = min(ans, (v[2] + v[6] + v[6]) * n / 3);
            cout << ans << endl;
        } else if (n % 3 == 1) {
            ll ans = min(v[3] * (n - 1), (v[0] + v[2] + v[1]) * ((n - 1) / 3));
            ans = min(ans, (v[0] + v[4] + v[4]) * ((n - 1) / 3));
            ans = min(ans, (v[4] + v[5] + v[6]) * ((n - 1) / 3));
            ans = min(ans, (v[1] + v[5] + v[5]) * ((n - 1) / 3));
            ans = min(ans, (v[2] + v[6] + v[6]) * ((n - 1) / 3));
            ll tmp = min(v[0] + v[1] + v[2], v[3]);
            tmp = min(tmp, v[4] + v[5] + v[6]);
            tmp = min(tmp, v[1] + v[5] + v[5]);
            tmp = min(tmp, v[0] + v[4] + v[4]);
            tmp = min(tmp, v[2] + v[6] + v[6]);
            cout << ans + tmp << endl;
        } else {
            ll ans = min(v[3] * (n - 2), (v[0] + v[2] + v[1]) * ((n - 2) / 3));
            ans = min(ans, (v[0] + v[4] + v[4]) * ((n - 2) / 3));
            ans = min(ans, (v[4] + v[5] + v[6]) * ((n - 2) / 3));
            ans = min(ans, (v[1] + v[5] + v[5]) * ((n - 2) / 3));
            ans = min(ans, (v[2] + v[6] + v[6]) * ((n - 2) / 3));
            ll tmp = min(v[0] + v[1] + v[2], v[3] * 2);
            tmp = min(tmp, v[4] + v[5] + v[6]);
            tmp = min(tmp, v[1] + v[5] + v[5]);
            tmp = min(tmp, v[0] + v[4] + v[4]);
            tmp = min(tmp, v[2] + v[6] + v[6]);
            cout << ans + tmp << endl;
        }
    }
    return 0;
}