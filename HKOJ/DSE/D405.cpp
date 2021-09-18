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

char s[21][21];

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int h, w;
    cin >> h >> w;
    for (int i = 0; i < h; i++) {
        cin >> ws;
        for (int j = 0; j < w; j++) {
            cin >> s[i][j];
        }
    }
    s[h][w - 1] = 'S';
    for (int i = h - 1; i >= 0; i--) {
        for (int j = w - 1; j >= 0; j--) {
            if (s[i][j] == '#') {
                continue;
            }
            if (s[i + 1][j] == 'S' || s[i + 1][j] == 'E') {
                s[i][j] = 'S';
            } else if (s[i][j + 1] == 'S' || s[i][j + 1] == 'E') {
                s[i][j] = 'E';
            }
        }
    }
    int row = 0, col = 0;
    for (int i = 0; i < h + w - 2; i++) {
        cout << s[row][col];
        if (s[row][col] == 'S') {
            row++;
        } else {
            col++;
        }
    }
    cout << endl;
    return 0;
}