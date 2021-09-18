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

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    string s[3];
    for (int i = 0; i < 3; i++)
        cin >> s[i];
    for (int i = 1; i <= 2; i++) {
        char c = 'O';
        if (i == 2) {
            c = 'X';
        }
        for (int j = 0; j <= 2; j++) {
            if (s[j][0] == c && s[j][1] == c && s[j][2] == c) {
                cout << c << " wins" << endl;
                return 0;
            }
            if (s[0][j] == c && s[1][j] == c && s[2][j] == c) {
                cout << c << " wins" << endl;
                return 0;
            }
        }
        if (s[0][0] == c && s[1][1] == c && s[2][2] == c ||
            s[0][2] == c && s[1][1] == c && s[2][0] == c) {
            cout << c << " wins" << endl;
            return 0;
        }
    }
    for (int i = 0; i <= 2; i++) {
        for (int j = 0; j <= 2; j++) {
            if (s[i][j] == '.') {
                cout << "Not ended" << endl;
                return 0;
            }
        }
    }
    cout << "Draw" << endl;
    return 0;
}