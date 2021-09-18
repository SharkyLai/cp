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

struct Rect {
    int x1, y1, x2, y2;
};

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    Rect a, b;
    cin >> a.x1 >> a.y1 >> a.x2 >> a.y2;
    cin >> b.x1 >> b.y1 >> b.x2 >> b.y2;

    pair<int, int> c = {a.x2, a.y1};
    pair<int, int> d = {b.x2, b.y1};

    int ans, ans1, ans2;
    ans1 = sqrt((abs(b.y1 - a.y2))*(abs(b.y1 - a.y2)) + (abs(b.x1 - a.x2))*(abs(b.x1 - a.x2)));
    ans2 = sqrt(abs(b.x2 - a.x2)*abs(b.x2 - a.x2) + (abs(b.y2 - b.y1)));
    return 0;
}