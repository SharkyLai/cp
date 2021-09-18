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
const int MOD2 = 998244353;
 
#define FOR(i, a, b) for (int i=a; i<(b); i++)
#define F0R(i, a) for (int i=0; i<(a); i++)
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    ll n, m; cin >> n >> m; vll s(n); vll t(m); vll zero; vll one; ll cnt = 0; bool flag = true;
    F0R(i, n) {
        cin >> s[i];
        if (s[i] == 0) {
            zero.pb(i);
        } else if (s[i] == 1) {
            one.pb(i);
        }
    }
    F0R(i, m) {
        cin >> t[i];
    }
    ll k = 0;
    for (ll i = 0; i < m; i++) {
        if (k < 0) {
            k += n;
        } else if (k > n) {
            k -= n;
        }
        flag = true;
        if (t[i] == s[k]) {
            cnt++;
        } else {
            ll tmp = inf;
            ll k1 = k, k2 = k;
            if (t[i] == 0) {
                for (ll j = 0; j < sz(zero); j++) {
                    flag = false;
                    tmp = min(tmp, abs(zero[j] - k));
                    tmp = min(tmp, abs(n - zero[j] + k));
                    if (abs(zero[j] - k) < tmp || abs(n - zero[j] + k) < tmp) {
                        k1 = zero[j];
                    }
                }
                k = k1;
                cnt += tmp;
                // cout << tmp << " ";
                if (k < 0) {
                    k += n;
                } else if (k > n) {
                    k -= n;
                }
            } else {
                for (ll jj = 0; jj < sz(one); jj++) {
                    flag = false;
                    tmp = min(tmp, abs(one[jj] - k));
                    tmp = min(tmp, abs(n - one[jj] + k));
                    if (abs(one[jj] - k) < tmp || abs(n - one[jj] + k) < tmp) {
                        k2 = one[jj];
                    }
                }
                k = k2;
                cnt += tmp;
                // cout << tmp << " ";
                if (k < 0) {
                    k += n;
                } else if (k > n) {
                    k -= n;
                }
            }
            if (flag) {
                cout << -1 << endl;
                return 0;
            }
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}