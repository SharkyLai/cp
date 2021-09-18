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
    ll n, a, b, ab = 0, cnt = 0; cin >> n >> a >> b; vi v(n);
    F0R(i, n) {
        cin >> v[i];
        if (v[i] == 1) {
            if (a > 0) {
                a--;
            } else {
                if (b > 0) {
                    b--;
                    ab++;
                } else {
                    if (ab > 0) {
                        ab--;
                    } else {
                        cnt++;
                    }
                }
            }
        } else {
            if (b > 0) {
                b--;
            } else {
                cnt += 2;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}