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
#define sz(x) (int)(x).size()
#define mp make_pair
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define fi first
#define se second
#define pii pair<int, int>
#define endl "\n"

#define vi vector<int>
#define vs vector<string>
#define vc vector<char>
#define vb vector<bool>
#define vvi vector<vector<int> >
#define vll vector<long long>

#define si set<int>
#define sll set<ll>

const int inf = 1e9 + 5;
const int MOD = 1e9 + 7;

#define FOR(i, a, b) for (int i=a; i<(b); i++)
#define F0R(i, a) for (int i=0; i<(a); i++)

void read(vector<ll> v) {
    F0R(i, sz(v)) {
        cin >> v[i];
    }
}

bool isPrime(int num){
    if (num == 1) return false;
        for (int i = 2; i<=sqrt(num); i++){
            if (num % i == 0) return false;
        }
    return true;
}

ll wol[5][5] = {
    {0, 1, -1, -1, 1}, 
    {-1, 0, 1, -1, 1}, 
    {1, -1, 0, 1, -1}, 
    {1, 1, -1, 0, -1}, 
    {-1, -1, 1, 1, 0}
};
void usaco(string prob) {
    freopen((prob + ".in").c_str(), "r", stdin);
    freopen((prob + ".out").c_str(), "w", stdout);
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    usaco("rps");
    ll times, ca, cb, ma=0, mb=0;
	cin >> times >> ca >> cb;
	ll a[ca], b[cb];
	for (int i = 0; i < ca; i++) cin >> a[i];
	for (int i = 0; i < cb; i++) cin >> b[i];
	int x = 0, y = 0;
	for (int i = 0; i < times; i++) {
		if (x == ca) x = 0;
		if (y == cb) y = 0;
		if (wol[a[x]][b[y]] == 1) ma++;
		if (wol[a[x]][b[y]] == -1) mb++;
		x++;
		y++;
	}
	cout << mb << ' ' << ma << endl;
    return 0;
}