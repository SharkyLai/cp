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

ll convert_month(string m) {
    if (m == "January") {
        return 1;
    } else if (m == "February") {
        return 2;
    } else if (m == "March") {
        return 3;
    } else if (m == "April") {
        return 4;
    } else if (m == "May") {
        return 5;
    } else if (m == "June") {
        return 6;
    } else if (m == "July") {
        return 7;
    } else if (m == "August") {
        return 8;
    } else if (m == "September") {
        return 9;
    } else if (m == "October") {
        return 10;
    } else if (m == "November") {
        return 11;
    } else if (m == "December") {
        return 12;
    }
}

struct Date {
    ll d, m, y; char c; string tmp;
};

bool cmp(Date a, Date b) {
    if (a.y == b.y) {
        if (a.m == b.m) {
            if (a.d == b.d) {
                return false;
            } else {
                return a.d < b.d;
            }
        } else {
            return a.m < b.m;
        }
    } else {
        return a.y < b.y;
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    ll n; cin >> n; vector<Date> v(n);
    F0R(i, n) {
        cin >> v[i].d >> v[i].c >> v[i].tmp >> v[i].y;
        v[i].m = convert_month(v[i].tmp);
    }
    sort(all(v), cmp);
    F0R(i, n) {
        cout << v[i].d << ", " << v[i].tmp << " " << v[i].y << endl; 
    }
    return 0;
}