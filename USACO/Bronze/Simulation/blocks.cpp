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
#define pii pair<int, int>
#define vi vector<int>
#define endl "\n"
const int inf = 1e9 + 10;

#define FOR(i, a, b) for (int i=a; i<(b); i++)
#define F0R(i, a) for (int i=0; i<(a); i++)

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    // freopen("blocks.in", "r", stdin);
	// freopen("blocks.out", "w", stdout);
    int n, k; cin >> n;
    k = 2*n;
    vector<string> v(k);
    vi a(26);
    int arr[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    for (int in = 0; in < k; in++) {
        cin >> v[in];
    }
    for (int i = 0; i < 26; i++) {
        vi ch(k);
        for (int j = 0; j < k; j++) {
            ch[j] = count(v[j].begin(), v[j].end(), arr[i]);
        }
        sort(ch.begin(), ch.end());
        reverse(ch.begin(), ch.end());
        if (k == 2) {
            a[i] = (ch[0] + ch[1]);
        } else if (k > 2) {
            a[i] = (ch[0] + ch[1] + ch[2]);
        }
    }
    for (int out = 0; out < 26; out++) {
        cout << a[out] << endl;
    }
    return 0;
}