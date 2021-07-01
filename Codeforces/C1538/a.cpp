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

int gcd (int a, int b) { while (b) { a %= b; swap(a, b); } return a; }
int lcm (int a, int b) { return a / gcd(a, b) * b; }

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    /*int t, n, s, b, ans = 0, pivot;
    cin >> t;
    while (t--) {
        b = 0;
        s = inf;
        ans = 0;
        cin >> n;
        vector<int> a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            /*if (arr[i] < s) {
                s = i;
            }
            if (arr[i] > b) {
                b = i;
            } 8/
        }
        pivot = (n+1)/2;
        ans += min(n - s + 1, s + 1);
        }
        int minS = min_element(a.begin(), a.end()) - a.begin();
        int maxS = max_element(a.begin(), a.end()) - a.begin();
    } */
    return 0;
}