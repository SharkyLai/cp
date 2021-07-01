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

void sort(int a[], int n) {
    for (int i = 0; i < n; i++) {
        int m = i; // index of smallest element
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[m]) {
                m = j;
            }
        }   
        swap(a[i], a[m]);
    }
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll n, l, start, end;
    ld ans, gd = 0;
    cin >> n >> l;
    int arr[n-1];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, n);
    start = arr[0];
    end = l - arr[n-1];
    for (int j = 0; j < n; j++) {
        if (j != 0) {
            ld d = arr[j] - arr[j-1];
            gd = max(gd, d);
        }
    }
    // cout << "gd:"<< gd << endl;
    gd /= 2;
    ld maxse = max(start, end);
    // cout << "maxse:" << maxse << endl;
    ans = max(maxse, gd);
    // cout << max(maxse, gd) << endl;
    cout << ans << endl;
    return 0;
}