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

#define FOR(i, a, b) for (int i=a; i<(b); i++)
#define F0R(i, a) for (int i=0; i<(a); i++)

int gcd (int a, int b) { while (b) { a %= b; swap(a, b); } return a; }
int lcm (int a, int b) { return a / gcd(a, b) * b; }

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n, li;
    cin >> n;
    if (n > 3 || n == 1) {
        if (n == 1) {
            cout << 1;
            return 0;
        }
        for (int i = 0; i < n; i++) {
            if ((2 + 2*i) <= n) {
                cout << 2 + 2*i << " ";
                li = i+1;
            } else {
                if (i == n-1) {
                    cout << 1 + 2*(i-li);
                } else {
                    cout << 1 + 2*(i-li) << " ";
                }
            }
        }
    } else {
        cout << "NO SOLUTION";
    }
    return 0;
}