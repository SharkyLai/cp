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

ll find(vll v, ll n) {
    for (ll i = 0; i < sz(v); i++) {
        if (v[i] == n) {
            return i;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    string a, b; cin >> a >> b; vll cnt(26, 0); map<char, char> mp;
    F0R(i, a.length()) {
        cnt[a[i] - 'A']++;
    }
    vll sorted = cnt; sort(all(sorted));
    for (int i = 0; i < b.length(); i++) {
        mp[(find(cnt, sorted[i]) + 'A')] = b[i];
    }
    // mp.count()
    for (int i = 0; i < a.length(); i++) {
        if (mp.count(a[i])) {
            cout << mp[a[i]];
        } else {
            cout << a[i];
        }
    }
    cout << endl;
    return 0;
}