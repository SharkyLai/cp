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
    vll v(3); vll drop;
    F0R(i, 3) {
        cin >> v[i];
        if (i > 0 && v[i] < v[i-1]) drop.pb(i);
    }
    if (sz(drop) == 0) {
        if (v[1] - v[0] == v[2] - v[1]) {
            ll a1 = v[1] - v[0];
            ll a2 = v[0] - (v[1] - v[0]);
            ll a3 = v[2] + 1;
            while (a2 < 0) a2 += a3;
            if (a1 >= a3 || a2 >= a3) {
                cout << "No solution" << endl;
                return 0;
            }
            if ((a2 + a1) % a3 == v[0] && (a2 + (a1 * 2)) % a3 == v[1] && (a2 + (a1 * 3)) % a3 == v[2]) {
                cout << a1 << " " << a2 << " " << a3 << endl;
            } else {
                cout << "No solution" << endl;
            }
        } else {
            cout << "No solution" << endl;
            return 0;
        }
    } else if (sz(drop) == 1) {
        if (drop[0] == 1) {
            ll a1 = v[2] - v[1];
            ll a2 = v[0] - a1;
            ll a3 = v[0] + a1 - v[1];
            while (a2 < 0) {
                a2 += a3;
            }
            if (a1 >= a3 || a2 >= a3) {
                cout << "No solution" << endl;
                return 0;
            }
            if ((a2 + a1) % a3 == v[0] && (a2 + (a1 * 2)) % a3 == v[1] && (a2 + (a1 * 3)) % a3 == v[2]) {
                cout << a1 << " " << a2 << " " << a3 << endl;
            } else {
                cout << "No solution" << endl;
            }
            
        } else if (drop[0] == 2) {
            ll a1 = v[1] - v[0];
            ll a2 = v[0] - a1;
            ll a3 = v[1] + a1 - v[2];
            while (a2 < 0) {
                a2 += a3;
            }
            if (a1 >= a3 || a2 >= a3) {
                cout << "No solution" << endl;
                return 0;
            }
            if ((a2 + a1) % a3 == v[0] && (a2 + (a1 * 2)) % a3 == v[1] && (a2 + (a1 * 3)) % a3 == v[2]) {
                cout << a1 << " " << a2 << " " << a3 << endl;
            } else {
                cout << "No solution" << endl;
            }
        }
    } else if (sz(drop) == 2) {
        if (v[1] - v[2] == v[0] - v[1]) {
            ll a3 = v[0] + 1;
            ll a1 = v[1] + a3 - v[0];
            ll a2 = v[0] - a1;
            while (a2 < 0) {
                a2 += a3;
            }
            if (a1 >= a3 || a2 >= a3) {
                    cout << "No solution" << endl;
                    return 0;
                }
            if ((a2 + a1) % a3 == v[0] && (a2 + (a1 * 2)) % a3 == v[1] && (a2 + (a1 * 3)) % a3 == v[2]) {
                cout << a1 << " " << a2 << " " << a3 << endl;
            } else {
                cout << "No solution" << endl;
            }
        } else {
            cout << "No solution" << endl;
            return 0;
        }
    }
    return 0;
}