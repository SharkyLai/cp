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
#define fi first
#define se second
const int inf = 1e9 + 10;

#define FOR(i, a, b) for (int i=a; i<(b); i++)
#define F0R(i, a) for (int i=0; i<(a); i++)

bool same(string s) {
    int n = s.length();
    for (int i = 1; i < n; i++)
        if (s[i] != s[0])
            return false;
 
    return true;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    string s, t;
    cin >> s >> t;
    ll sl = s.length();
    ll tl = t.length();
    ll count = 0;
    if (same(s) && (same(t))) {
        cout << (tl-sl+1)*sl;
        return 0;
    }
    for (int i = 0; i <= tl - sl; i++) {
        for (int j = 0, k = i; j < sl; j++, k++) {
            if (s[j] != t[k]) {
                count++;
            }
        }
    }
    cout << count << endl;
    
}