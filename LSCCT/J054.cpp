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

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n;
    cin >> n;
    int count = 0;
    bool flag = true;
    vector<int> p1(n); // my cows
    vector<int> p2(n); // enemy cows
    vector<int> c;
    for (int i = 0; i < n; i++) {
        cin >> p1[i];
    }
    for (int j = 0; j < n; j++) {
        cin >> p2[j];
    }
    sort(p1.begin(), p1.end());
    sort(p2.begin(), p2.end());
    for (int k = 0, l = 0; k < n && l < n;) {
        if (p1[k] > p2[l]) {
            k++; l++; count++;
        } else {
            k++;
        }
    }
    cout << count << endl;
    return 0;
}