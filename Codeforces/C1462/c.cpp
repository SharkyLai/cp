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
    int t, x, ans;
    cin >> t;
    while (t--) {
        cin >> x;
        if (x > 45) {
            ans = -1;
        } else {
            if (x <= 9) {
                ans = x;
            } else if (x > 9 && x <= 17) {
                ans = (x-9)*10 + 9;
            } else if (x > 17 && x <= 24) {
                ans = (x-17)*100 + 89;
            } else if (x > 24 && x <= 30) {
                ans = (x-24)*1000 + 789;
            } else if (x > 30 && x <= 35) {
                ans = (x-30)*10000 + 6789;
            } else if (x > 35 && x <= 39) {
                ans = (x-35)*100000 + 56789;
            } else if (x > 39 && x <= 42) {
                ans = (x-39)*1000000 + 456789;
            } else if (x > 42 && x <= 44) {
                ans = (x-42)*10000000 + 3456789;
            } else if (x == 45) {
                ans = 123456789;
            }
        }
        cout << ans << endl;
    }
    return 0;
}