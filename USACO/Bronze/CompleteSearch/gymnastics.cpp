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
    usaco("gymnastics");
    ll k, n, ans = 0, cnt = 0, pos1, pos2; cin >> k >> n;
    ll a[10][20];
    for (int i = 0; i < k; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cnt = 0;
            for (int b = 0; b < k; b++) {
                for (int c = 0; c < n; c++) {
                    if (a[b][c] == i+1) {
                        pos1 = c;
                    } else if (a[b][c] == j+1) {
                        pos2 = c;
                    }
                }
                if (pos1 < pos2) {
                    cnt++;
                }
            }
            if (cnt == k && i != j) {
                ans++;
                // cout << i << " " << j << endl;
            }
        }
    }
    cout << ans << endl;
    return 0;
}