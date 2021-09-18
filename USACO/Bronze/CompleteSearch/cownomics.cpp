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

void usaco(string prob) {
    freopen((prob + ".in").c_str(), "r", stdin);
    freopen((prob + ".out").c_str(), "w", stdout);
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    usaco("cownomics");
    ll n, m, ans = 0; cin >> n >> m; vs spot(n); vs plain(n); set<char> s1; set<char> s2;
    for (int i = 0; i < n; i++) {
        cin >> spot[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> plain[i];
    }
    for (int i = 0; i < m; i++) {
        s1.clear(); s2.clear();
        for (int j = 0; j < n; j++) {
            s1.insert(spot[j][i]);
            s2.insert(plain[j][i]);
        }
            int size1 = s1.size();
            int size2 = s2.size();
            s1.insert(s2.begin(), s2.end());
            if (s1.size() == size1 + size2) {
                ans++;
            }
    }
    cout << ans << endl;
    return 0;
}