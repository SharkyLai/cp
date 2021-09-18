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

void solve(ll t) {
    string ans; string s1; cin >> ws; getline(cin, s1); vll v; string s = "";
    F0R(i, s1.length()) {
        if (s1[i] == '"') {
            v.pb(i);
        }
    }
    for (ll i = 1; i < v[1]; i++) {
        s += s1[i];
    }
    string tmp = "";
    for (ll i = v[2] + 1; i < v[3]; i++) {
        tmp += s1[i];
    }
    string tmp2 = "";
    if (sz(v) == 6) {
        for (ll i = v[4] + 1; i < v[5]; i++) {
            tmp2 += s1[i];
        }
    }
    if (s1[v[1] + 2] == 'A') {
        ans = s + tmp;
    } else if (s1[v[1] + 2] == 'C') {
        ll len = v[3] - v[2] - 1;
        for (ll i = 0; i < s.length() - len + 1; i++) {
            if (s.substr(i, len) == tmp) {
                ll t = len;
                while (t--) {
                    s.erase(s.begin() + i);
                }
                break;
            }
        }
        ans = s;
    } else if (s1[v[1] + 2] == 'R') {
        ll len = v[3] - v[2] - 1;
        for (ll i = 0; i < s.length() - len + 1; i++) {
            if (s.substr(i, len) == tmp) {
                ll tmp3 = -1;
                for (ll j = i; j < len + i; j++) {
                    tmp3++;
                    s[j] = tmp2[tmp3];
                }
                break;
            }
        }
        ans = s;
    } else if (s1[v[1] + 2] == 'I') {
        string pos = "";
        for (ll i = v[2] - 2; i > v[1]; i--) {
            if (s1[i] == ' ') {
                break;
            }
            pos += s1[i];
        }
        reverse(pos.begin(), pos.end());
        ll num = stoll(pos);
        ll len = v[3] - v[2] - 1;
        ll k = -1;
        for (ll i = num; i < num + len; i++) {
            k++;
            s.insert(s.begin() + i - 1, tmp[k]);
        }
        ans = s;
    }
    cout << "Command #" << t << ": " << '"' << ans << '"' << endl;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    ll n; cin >> n;
    for (ll i = 1; i <= n; i++) {
        solve(i);
    }
    return 0;
}