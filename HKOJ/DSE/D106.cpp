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

using namespace std;

#define ll long long
#define ld long double
#define all(x) x.begin(), x.end()
#define MOD 1000000007
#define sz(x) (int)(x).size()
#define mp make_pair
#define pb push_back
#define lb lower_bound
#define ub upper_bound
const int inf = 1e9 + 10;

#define FOR(i, a, b) for (int i=a; i<(b); i++)
#define F0R(i, a) for (int i=0; i<(a); i++)

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll n;
    cin >> n;
    string suffix = "th";
    if (n % 100 >= 10 && n % 100 <= 19) {
        suffix = "th";
    } else {
        if (n % 10 == 1) {
            suffix = "st";
        } else if (n % 10 == 2) {
            suffix = "nd";
        } else if (n % 10 == 3) {
            suffix = "rd";
        }
    }
    cout << n << suffix << endl;
    return 0;
}