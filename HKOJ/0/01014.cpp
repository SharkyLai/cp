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

ll z(ll n) {
    ll op = 0;
    while (n > 0 && op < 4) {
        op++;
        if (n >= 500) {
            n -= 500;
        } else if (n >= 200) {
            // eq[1]++;
            n -= 200;
        } else if (n >= 100) {
            // eq[2]++;
            n -= 100;
        } else if (n >= 50) {
            // eq[3]++;
            n -= 50;
        } else if (n >= 20) {
            // eq[4]++;
            n -= 20;
        } else if (n >= 10) {
          //  eq[5]++;
            n -= 10;
        } else if (n >= 5) {
            // eq[6]++;
            n -= 5;
        } else if (n >= 2) {
            // eq[7]++;
            n -= 2;
        } else if (n >= 1) {
            // eq[8]++;
            n -= 1;
        }
    }
    if (n == 0) {
        return 1;
    }
    return -1;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    ld tmp; cin >> tmp;
    ll n = tmp * 10; vll eq(9, 0); ll op = 0; ll tmp2 = n;
    while (n <= 2000) {
        if (z(n) == 1) {
            tmp2 = n;
            while (n > 0 && op < 4) {
                op++;
                if (n >= 500) {
                    eq[0]++;
                    n -= 500;
                } else if (n >= 200) {
                    eq[1]++;
                    n -= 200;
                } else if (n >= 100) {
                    eq[2]++;
                    n -= 100;
                } else if (n >= 50) {
                    eq[3]++;
                    n -= 50;
                } else if (n >= 20) {
                    eq[4]++;
                    n -= 20;
                } else if (n >= 10) {
                    eq[5]++;
                    n -= 10;
                } else if (n >= 5) {
                    eq[6]++;
                    n -= 5;
                } else if (n >= 2) {
                    eq[7]++;
                    n -= 2;
                } else if (n >= 1) {
                    eq[8]++;
                    n -= 1;
                }
            }
            break;
        } else {
            n += 1;
            tmp += 0.1;
        }
    }
    cout << '$' << tmp << endl;
    F0R(i, 9) {
        if (eq[i] > 0) {
            cout << eq[i] << " ";
            if (i == 0) cout << "$50" << endl;
            else if (i == 1) cout << "$20" << endl;
            else if (i == 2) cout << "$10" << endl;
            else if (i == 3) cout << "$5" << endl;
            else if (i == 4) cout << "$2" << endl;
            else if (i == 5) cout << "$1" << endl;
            else if (i == 6) cout << "$0.5" << endl;
            else if (i == 7) cout << "$0.2" << endl;
            else if (i == 8) cout << "$0.1" << endl;
        }
    }
    return 0;
}