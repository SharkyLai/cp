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
    string s; getline(cin, s); vll cnt(10, 0); string tmp = ""; vs v;
    for (ll i = 0; i < s.length(); i++) {
        if ((int) (s[i] - '0') < 10 && (int) (s[i] - '0') >= 0) {
            if (i == 0) {
                tmp += s[i];
            } else {
                if (tmp == "" && s[i-1] == ' ') {
                    tmp += s[i];
                } else if (tmp != "") {
                    tmp += s[i];
                }
            }
        } else {
            if ((isupper(s[i]) || islower(s[i])) && tmp != "") {
                tmp = "";
            } else if (tmp != "") {
                v.pb(tmp);
                tmp = "";
            }
        }
    }
    if (tmp != "") v.pb(tmp);
    // F0R(i, sz(v)) cout << v[i] << endl;
    sort(all(v));
    // F0R(i, sz(v)) cout << v[i] << endl;
    F0R(i, sz(v)) {
        if (i > 0) {
            if (v[i] != v[i-1]) {
                cnt[v[i][0] - '0']++;
            }
        } else {
            cnt[v[i][0] - '0']++;
        }
    }
    F0R(i, 10) {
        if (cnt[i] > 0) {
            cout << i << " " << cnt[i] << endl;
        }
    }
    return 0;
}