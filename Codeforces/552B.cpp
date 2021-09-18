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

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    ll n; cin >> n;
    if (n < 10) {
        cout << n << endl;
    } else if (n >= 10 && n < 100) {
        cout << 9 + (n-9)*2 << endl;
    } else if (n >= 100 && n < 1000) {
        cout << 189 + (n-99)*3 << endl;
    } else if (n >= 1000 && n < 10000) {
        cout << 2889 + (n-999)*4 << endl;
    } else if (n >= 10000 && n < 100000) {
        cout << 38889 + (n-9999)*5 << endl;
    } else if (n >= 1e5 && n < 1e6) {
        cout << 488889 + (n-99999)*6 << endl;
    } else if (n >= 1e6 && n < 1e7) {
        cout << 5888889 + (n-999999)*7 << endl;
    } else if (n >= 1e7 && n < 1e8) {
        cout << 68888889 + (n-9999999)*8 << endl;
    } else if (n >= 1e8 && n < 1e9) {
        cout << 788888889 + (n-99999999)*9 << endl;
    } else {
        cout << 8888888899 << endl;
    }
    return 0;
}