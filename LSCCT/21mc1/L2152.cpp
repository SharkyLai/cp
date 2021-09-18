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
    int n, firstd = inf, lastd = 0;
    cin >> n;
    bool flag = false;
    vector<string> v(n);
    for (int i = 0; i < n; i++) {
        getline(cin, v[i]); 
    }
    vector<string> s = v;
    sort(s.begin(), s.end());
    for (int j = 0; j < n; j++) {
        if (s[j] != v[j]) {
            firstd = min(firstd, j);
            lastd = max(lastd, j);
        }
    }
    reverse(v.begin() + firstd, v.begin() + lastd + 1);
    if (v == s) {
        flag = true;
    }
    if (flag) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}