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
    string s; char a, b; cin >> s >> ws >> a >> b;
    ll d = (a - '0') * 10 + b - '0';
    if (s == "OCT" && (b == '8' || b == '9')) {
        cout << "No solution" << endl;
        return 0;
    } else if (s == "DEC" && (d > 25)) {
        cout << "No solution" << endl;
        return 0;
    }
    ll ans;
    if (s == "OCT") {
        ans = (a - '0') * 8 + (b - '0');
        cout << "DEC ";
        if (ans < 10) {
            cout << 0 << ans << endl;
        } else {
            cout << ans << endl;
        }
    } else {
        ll mod = d % 8;
        ans = ((d - mod) / 8) * 10 + mod;
        cout << "OCT ";
        if (ans < 10) {
            cout << 0 << ans << endl;
        }   else {
            cout << ans << endl;
        }
    }
    // cout << d << endl;
}