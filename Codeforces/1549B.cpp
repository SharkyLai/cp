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
#define MOD 1000000007
#define sz(x) (int)(x).size()
#define mp make_pair
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define fi first
#define se second
#define pii pair<int, int>
#define vi vector<int>
#define endl "\n"
const int inf = 1e9 + 10;

#define FOR(i, a, b) for (int i=a; i<(b); i++)
#define F0R(i, a) for (int i=0; i<(a); i++)

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t, n, cnt = 0;
    string v1, v2;
    cin >> t;
    while (t--) {
        cnt = 0;
        cin >> n;
        cin >> v1 >> v2;
        vector<bool> taken(n);
        for (int i = 0; i < n; i++) {
            if (v2[i] == '1') {
                for (int j = i-1; j <= i+1; j++) {
                    if (j >= 0 && j < n) {
                        if (!taken[j]) {
                            if ((v1[j] == '1' && i != j) || (v1[j] == '0' && i == j)) {
                                taken[j] = 1;
                                cnt++;
                                break;
                            }
                        }
                    }
                }
                /*if (i == 0) {
                    if (v1[i+1] == 1) {
                        cnt++;
                    }
                } else if (i == n-1) {
                    if (v1[i-1] == 1) {
                        cnt++;
                    }
                } else {
                    if (v1[i-1] == 1) {
                        cnt++;
                    }
                    if (v1[i+1] == 1) {
                        cnt++;
                    }
                } */
            }
        }
        cout << cnt << endl;
    }
    return 0;
}