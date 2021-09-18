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
#define endl "\n"
const int inf = 1e9 + 10;

#define FOR(i, a, b) for (int i=a; i<(b); i++)
#define F0R(i, a) for (int i=0; i<(a); i++)

int gcd (int a, int b) { while (b) { a %= b; swap(a, b); } return a; }
int lcm (int a, int b) { return a / gcd(a, b) * b; }

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    freopen("mixmilk.in", "r", stdin);
	freopen("mixmilk.out", "w", stdout);
    int c[5], m[5], transfer;
    for (int i = 0; i < 3; i++) {
        cin >> c[i] >> m[i];
    }
    c[3] = c[0];
    m[3] = m[0];
    c[4] = c[1];
    m[4] = m[1];
    // cout << c[0] << " " << c[1] << " " << c[2] << endl;
    // cout << m[0] << " " << m[1] << " " << m[2] << endl;
    for (int k = 0; k <= 3; k++) {
        int j = k;
        if (k == 3) {
            j = 0;
        }
        m[3] = m[0];
        m[4] = m[1];
        transfer = min(c[j+1] - m[j+1], m[j]);
        /*if (k == 3) {
            cout << c[j+1] << " " << m[j+1] << " " << m[j] << endl;
            cout << m[0] << endl;
        }
        cout << "Transfer " << k << ": " << transfer << endl; */
        // pour operation
        m[j] -= transfer;
        m[j+1] += transfer;
        if (k == 2) {
            m[0] = m[3];
        }
    }
    cout << m[0] << endl;
    cout << m[1] << endl;
    cout << m[2];
    return 0;
}