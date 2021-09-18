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
    string s; cin >> s; ll len = s.length(); ll l = 0, r = 0, u = 0, d = 0;
    if (len % 2 == 1) {
        cout << -1 << endl;
    } else {
        for (int i = 0; i < len; i++) {
            if (s[i] == 'L') {
                l++;
            } else if (s[i] == 'R') {
                r++;
            } else if (s[i] == 'U') {
                u++;
            } else if (s[i] == 'D') {
                d++;
            }
        }
        ll ud = abs(d-u);
        ll lr = abs(l-r);
        cout << (ud + lr) / 2 << endl;
    }
    return 0;
}