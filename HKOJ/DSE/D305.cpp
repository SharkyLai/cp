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
    string s; cin >> s; int len = s.length(); ll sum; int m;
    if (len == 7) {
        sum = 324 + (8 * (s[0] - 55)) + (7 * (s[1] - 48)) + (6 * (s[2] - 48)) + (5 * (s[3] - 48)) + (4 * (s[4] - 48)) + (3 * (s[5] - 48)) + (2 * (s[6] - 48));
    } else {
        sum = 9 * (s[0] - 55) + 8 * (s[1] - 55) + (7 * (s[2] - 48)) + (6 * (s[3] - 48)) + (5 * (s[4] - 48)) + (4 * (s[5] - 48)) + (3 * (s[6] - 48)) + (2 * (s[7] - 48));
    }
    m = sum % 11;
    cout << s << '(';
    if (m == 0) {
        cout << 0;
    } else if (m == 1) {
        cout << 'A';
    } else {
        cout << 11 - m;
    }
    cout << ')';
    return 0;
}