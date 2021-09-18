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
    vll a(6); vll cnta(10, 0); vll b(6); vll cntb(10, 0); ll q;
    F0R(i, 6) {
        cin >> a[i];
        cnta[a[i]]++;
        if (a[i] == 6) {
            cnta[9]++;
        }
        if (a[i] == 9) {
            cnta[6]++;
        }
    }
    F0R(i, 6) {
        cin >> b[i];
        cntb[b[i]]++;
        if (b[i] == 6) {
            cntb[9]++;
        }
        if (b[i] == 9) {
            cntb[6]++;
        }
    }
    cin >> q;
    F0R(i, q) {
        char c1, c2; cin >> c1 >> c2;
        ll x = c1 - '0';
        ll y = c2 - '0';
        if ((cnta[x] > 0 && cntb[y] > 0) || (cntb[x] > 0 && cnta[y] > 0)) {
            cout << "Yes" << endl;
            continue;
        }
        cout << "No" << endl;
    }
    return 0;
}