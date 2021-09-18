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
    ll x, y, z; cin >> x >> y >> z; ll k; cin >> k; vector<vector<long long> > ans(k + 5); ll cnt = 0;
    while (abs(x) > 1 || abs(y) > 1 || abs(z) > 1) {
        // cout << x << " " << y << " " << z << endl;
        cnt++;
        ans[cnt-1].pb(x); ans[cnt-1].pb(y); ans[cnt-1].pb(z);
        if (abs(x) >= abs(y) && abs(x) >= abs(z)) {
            if (x < 0) {
                x += 2;
            } else {
                x -= 2;
            }
            if (abs(y) >= abs(z)) {
                if (y < 0) {
                    y += 1;
                } else {
                    y -= 1;
                }
            } else {
                if (z < 0) {
                    z += 1;
                } else {
                    z -= 1;
                }
            }
        } else if (abs(y) >= abs(x) && abs(y) >= abs(z)) {
            if (y < 0) {
                y += 2;
            } else {
                y -= 2;
            }
            if (abs(x) >= abs(z)) {
                if (x < 0) {
                    x += 1;
                } else {
                    x -= 1;
                }
            } else {
                if (z < 0) {
                    z += 1;
                } else {
                    z -= 1;
                }
            }
        } else {
            if (z < 0) {
                z += 2;
            } else {
                z -= 2;
            }
            if (abs(x) >= abs(y)) {
                if (x < 0) {
                    x += 1;
                } else {
                    x -= 1;
                }
            } else {
                if (y < 0) {
                    y += 1;
                } else {
                    y -= 1;
                }
            }
        }
    }
    if (!(x == 0 && y == 0 && z == 0)) {
        cnt++;
        ans[cnt-1].pb(x); ans[cnt-1].pb(y); ans[cnt-1].pb(z);
    }
    // cnt++;
    // ans[cnt-1].pb(x); ans[cnt-1].pb(y); ans[cnt-1].pb(z);
    ll tmpc = 0; 
    if (abs(x) == 1) tmpc++;
    if (abs(y) == 1) tmpc++;
    if (abs(z) == 1) tmpc++;
    if (tmpc == 1) {
        if (abs(x) == 1) {
            cnt++;
            x = 0; y = 2; z = 0;
            ans[cnt-1].pb(x); ans[cnt-1].pb(y); ans[cnt-1].pb(z);
            cnt++;
            x = 0; y = 1; z = 2;
            ans[cnt-1].pb(x); ans[cnt-1].pb(y); ans[cnt-1].pb(z);
        } else if (abs(y) == 1) {
            cnt++;
            x = 0; y = 0; z = 2;
            ans[cnt-1].pb(x); ans[cnt-1].pb(y); ans[cnt-1].pb(z);
            cnt++;
            x = 0; y = 2; z = 1;
            ans[cnt-1].pb(x); ans[cnt-1].pb(y); ans[cnt-1].pb(z);
        } else if (abs(z) == 1) {
            cnt++;
            x = 0; y = 2; z = 0;
            ans[cnt-1].pb(x); ans[cnt-1].pb(y); ans[cnt-1].pb(z);
            cnt++;
            x = 0; y = 1; z = 2;
            ans[cnt-1].pb(x); ans[cnt-1].pb(y); ans[cnt-1].pb(z);
        }
    } else if (tmpc == 2) {
        if (z == 0) {
            if (x == 1 && y == 1) {
                cnt++;
                x = 2; y = -1; z = 0;
                ans[cnt-1].pb(x); ans[cnt-1].pb(y); ans[cnt-1].pb(z);
            } else if (x == 1 && y == -1) {
                cnt++;
                x = 2; y = 1; z = 0;
                ans[cnt-1].pb(x); ans[cnt-1].pb(y); ans[cnt-1].pb(z);
            } else if (x == -1 && y == 1) {
                cnt++;
                x = 1; y = 2; z = 0;
                ans[cnt-1].pb(x); ans[cnt-1].pb(y); ans[cnt-1].pb(z);
            } else if (x == -1 && y == -1) {
                cnt++;
                x = 1; y = -2; z = 0;
                ans[cnt-1].pb(x); ans[cnt-1].pb(y); ans[cnt-1].pb(z);
            }
        } else if (y == 0) {
            if (x == 1 && z == 1) {
                cnt++;
                x = 2; y = 0; z = -1;
                ans[cnt-1].pb(x); ans[cnt-1].pb(y); ans[cnt-1].pb(z);
            } else if (x == 1 && z == -1) {
                cnt++;
                x = 2; y = 0; z = 1;
                ans[cnt-1].pb(x); ans[cnt-1].pb(y); ans[cnt-1].pb(z);
            } else if (x == -1 && z == 1) {
                cnt++;
                x = 1; y = 0; z = 2;
                ans[cnt-1].pb(x); ans[cnt-1].pb(y); ans[cnt-1].pb(z);
            } else if (x == -1 && z == -1) {
                cnt++;
                x = 1; y = 0; z = -2;
                ans[cnt-1].pb(x); ans[cnt-1].pb(y); ans[cnt-1].pb(z);
            }
        } else if (x == 0)  {
            if (y == 1 && z == 1) {
                cnt++;
                x = 0; y = 2; z = -1;
                ans[cnt-1].pb(x); ans[cnt-1].pb(y); ans[cnt-1].pb(z);
            } else if (y == 1 && z == -1) {
                cnt++;
                x = 0; y = 2; z = 1;
                ans[cnt-1].pb(x); ans[cnt-1].pb(y); ans[cnt-1].pb(z);
            } else if (y == -1 && z == 1) {
                cnt++;
                x = 0; y = 1; z = 2;
                ans[cnt-1].pb(x); ans[cnt-1].pb(y); ans[cnt-1].pb(z);
            } else if (y == -1 && z == -1) {
                cnt++;
                x = 0; y = 1; z = -2;
                ans[cnt-1].pb(x); ans[cnt-1].pb(y); ans[cnt-1].pb(z);
            }
        }
    } else if (tmpc == 3) {
        if (x == 1 && y == 1 && z == 1) {
            cnt++;
            x = 1; y = 2; z = -1;
            ans[cnt-1].pb(x); ans[cnt-1].pb(y); ans[cnt-1].pb(z);
            cnt++;
            x = 1; y = 0; z = 0;
            ans[cnt-1].pb(x); ans[cnt-1].pb(y); ans[cnt-1].pb(z);
            cnt++;
            x = 0; y = 2; z = 0;
            ans[cnt-1].pb(x); ans[cnt-1].pb(y); ans[cnt-1].pb(z);
            cnt++;
            x = 0; y = 1; z = 2;
            ans[cnt-1].pb(x); ans[cnt-1].pb(y); ans[cnt-1].pb(z);
        } else if (x == 1 && y == 1 && z == -1) {
            cnt++;
            x = 1; y = 2; z = 1;
            ans[cnt-1].pb(x); ans[cnt-1].pb(y); ans[cnt-1].pb(z);
            cnt++;
            x = 1; y = 0; z = 0;
            ans[cnt-1].pb(x); ans[cnt-1].pb(y); ans[cnt-1].pb(z);
            cnt++;
            x = 0; y = 2; z = 0;
            ans[cnt-1].pb(x); ans[cnt-1].pb(y); ans[cnt-1].pb(z);
            cnt++;
            x = 0; y = 1; z = 2;
            ans[cnt-1].pb(x); ans[cnt-1].pb(y); ans[cnt-1].pb(z);
        } else if (x == 1 && y == -1 && z == 1) {
            cnt++;
            x = 1; y = 1; z = 2;
            ans[cnt-1].pb(x); ans[cnt-1].pb(y); ans[cnt-1].pb(z);
            cnt++;
            x = 1; y = 0; z = 0;
            ans[cnt-1].pb(x); ans[cnt-1].pb(y); ans[cnt-1].pb(z);
            cnt++;
            x = 0; y = 2; z = 0;
            ans[cnt-1].pb(x); ans[cnt-1].pb(y); ans[cnt-1].pb(z);
            cnt++;
            x = 0; y = 1; z = 2;
            ans[cnt-1].pb(x); ans[cnt-1].pb(y); ans[cnt-1].pb(z);
        } else if (x == 1 && y == -1 && z == -1) {
            cnt++;
            x = 1; y = 1; z = -2;
            ans[cnt-1].pb(x); ans[cnt-1].pb(y); ans[cnt-1].pb(z);
            cnt++;
            x = 1; y = 0; z = 0;
            ans[cnt-1].pb(x); ans[cnt-1].pb(y); ans[cnt-1].pb(z);
            cnt++;
            x = 0; y = 2; z = 0;
            ans[cnt-1].pb(x); ans[cnt-1].pb(y); ans[cnt-1].pb(z);
            cnt++;
            x = 0; y = 1; z = 2;
            ans[cnt-1].pb(x); ans[cnt-1].pb(y); ans[cnt-1].pb(z);
        } else if (x == -1 && y == 1 && z == 1) {
            cnt++;
            x = -1; y = 2; z = -1;
            ans[cnt-1].pb(x); ans[cnt-1].pb(y); ans[cnt-1].pb(z);
            cnt++;
            x = -1; y = 0; z = 0;
            ans[cnt-1].pb(x); ans[cnt-1].pb(y); ans[cnt-1].pb(z);
            cnt++;
            x = 0; y = 2; z = 0;
            ans[cnt-1].pb(x); ans[cnt-1].pb(y); ans[cnt-1].pb(z);
            cnt++;
            x = 0; y = 1; z = 2;
            ans[cnt-1].pb(x); ans[cnt-1].pb(y); ans[cnt-1].pb(z);
        } else if (x == -1 && y == 1 && z == -1) {
            cnt++;
            x = -1; y = 2; z = 1;
            ans[cnt-1].pb(x); ans[cnt-1].pb(y); ans[cnt-1].pb(z);
            cnt++;
            x = -1; y = 0; z = 0;
            ans[cnt-1].pb(x); ans[cnt-1].pb(y); ans[cnt-1].pb(z);
            cnt++;
            x = 0; y = 2; z = 0;
            ans[cnt-1].pb(x); ans[cnt-1].pb(y); ans[cnt-1].pb(z);
            cnt++;
            x = 0; y = 1; z = 2;
            ans[cnt-1].pb(x); ans[cnt-1].pb(y); ans[cnt-1].pb(z);
        } else if (x == -1 && y == -1 && z == 1) {
            cnt++;
            x = -1; y = -2; z = -1;
            ans[cnt-1].pb(x); ans[cnt-1].pb(y); ans[cnt-1].pb(z);
            cnt++;
            x = -1; y = 0; z = 0;
            ans[cnt-1].pb(x); ans[cnt-1].pb(y); ans[cnt-1].pb(z);
            cnt++;
            x = 0; y = 2; z = 0;
            ans[cnt-1].pb(x); ans[cnt-1].pb(y); ans[cnt-1].pb(z);
            cnt++;
            x = 0; y = 1; z = 2;
            ans[cnt-1].pb(x); ans[cnt-1].pb(y); ans[cnt-1].pb(z);
        } else if (x == -1 && y == -1 && z == -1) {
            cnt++;
            x = -1; y = -2; z = 1;
            ans[cnt-1].pb(x); ans[cnt-1].pb(y); ans[cnt-1].pb(z);
            cnt++;
            x = -1; y = 0; z = 0;
            ans[cnt-1].pb(x); ans[cnt-1].pb(y); ans[cnt-1].pb(z);
            cnt++;
            x = 0; y = 2; z = 0;
            ans[cnt-1].pb(x); ans[cnt-1].pb(y); ans[cnt-1].pb(z);
            cnt++;
            x = 0; y = 1; z = 2;
            ans[cnt-1].pb(x); ans[cnt-1].pb(y); ans[cnt-1].pb(z);
        }
    }
    cout << cnt << endl;
    bool flag = false;
    for (ll i = 0; i < cnt; i++) {
        if (ans[i][0] == 0 && ans[i][1] == 0 && ans[i][2] == 0) {
            flag = true;
        }
        cout << ans[i][0] << " " << ans[i][1] << " " << ans[i][2] << endl;
    }
    if (!flag) {
        cout << 0 << " " << 0 << " " << 0 << endl;
        return 0;
    }
    // if (ans[cnt-1][0] == 0 && ans[cnt-1][1] == 0 && ans[cnt-1])
    // cout << 0 << " " << 0 << " " << 0 << " " << endl;
    return 0;
}