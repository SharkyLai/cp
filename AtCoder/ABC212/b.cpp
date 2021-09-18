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
#define MOD 1000000007
#define sz(x) (int)(x).size()
#define mp make_pair
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define fi first
#define se second
#define pii pair<int, int>
#define vi vector<int>
#define endl "\n"
const int inf = 1e9 + 10;

#define FOR(i, a, b) for (int i=a; i<(b); i++)
#define F0R(i, a) for (int i=0; i<(a); i++)

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    string s; cin >> s;
    bool flag = true;
    if (stoi(s) % 1111 == 0) {
        flag = false;
    }
    if (s == "1234" || s == "2345" || s == "3456" || s == "4567" || s == "5678" || s == "6789" || s == "7890" || s == "8901" || s == "9012" || s == "0123") {
        flag = false;
    }
    if (flag) {
        cout << "Strong" << endl;
    } else {
        cout << "Weak" << endl;
    }
    return 0;
}