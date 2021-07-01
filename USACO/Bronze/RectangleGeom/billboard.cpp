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

struct Rect {
    int x1, y1, x2, y2;
    int area() {
        return (y2 - y1) * (x2 - x1);
    }
};

/*int intersect(Rect p, Rect q) {
    int xOverlap = abs(p.x2 - q.x1);
    int yOverlap = abs(q.y2 - p.y1);
    return xOverlap * yOverlap;
} */

int intersect(Rect p, Rect q) {
	int xOverlap = max(0, min(p.x2, q.x2) - max(p.x1, q.x1));
	int yOverlap = max(0, min(p.y2, q.y2) - max(p.y1, q.y1));
	return xOverlap * yOverlap;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    freopen("billboard.in", "r", stdin);
	freopen("billboard.out", "w", stdout);

    Rect a, b, t;
    int ans;

    cin >> a.x1 >> a.y1 >> a.x2 >> a.y2;
    cin >> b.x1 >> b.y1 >> b.x2 >> b.y2;
    cin >> t.x1 >> t.y1 >> t.x2 >> t.y2;

    //cout << intersect(a, t) << endl;
    //cout << intersect(b, t) << endl;

    ans = a.area() + b.area() - intersect(a, t) - intersect(b, t);
    cout << ans << endl;
    return 0;
}