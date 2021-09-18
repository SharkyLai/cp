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
    int n;
    cin >> n;
    int count = 0; // 46 = 25
    int list[52] = {1, 2, 3, 5, 7, 10, 11, 13, 14, 17, 19, 21, 22, 23, 26, 29, 31, 33, 34, 37, 38, 39, 41, 43, 46, 47, 51, 53, 55, 57, 58, 59, 61, 62, 65, 67, 69, 71, 73, 74, 79, 82, 83, 85, 86, 87, 89, 91, 93, 94, 95, 97};
    for (int i = 0; i < 52; i++) {
        if (n >= list[i]) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}