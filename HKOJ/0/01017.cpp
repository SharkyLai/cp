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
#include <stack>
#include <deque>

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
    queue<ll> q; ll n; cin >> n; vll a; vll b; ll lst = -1; vll ans; bool flag = true; ll mq = 1;
    F0R(i, n) {
        ll x; cin >> x; q.push(x);
    }
    F0R(i, n) {
        if (i == 0) {
            a.pb(q.front());
            lst = q.front();
            mq = 1;
            ans.pb(1);
        } else {
            if (q.front() > lst) {
                //if (lq == 1) a.pb(q.front());
                a.pb(q.front());
                //else b.pb(q.front());
                // mq = 1;
                lst = q.front();
                ans.pb(mq);
            } else {
                // lst = max(lst, q.front());
                if (mq == 1) {
                    b.pb(q.front());
                    mq = 2; ans.pb(2);
                } else {
                    a.pb(q.front());
                    mq = 1; ans.pb(1);
                }
            }
        }
        q.pop();
    }
    // F0R(i, n) cout << ans[i] << endl;
    for (ll i = 0, j = 0; (i + j) < n;) {
        if (a[i] == (i + j + 1) && i < sz(a)) {
            i++;
            continue;
        } else if (b[j] == (i + j + 1) && j < sz(b)) { 
            j++;
            continue;
        } else {
            flag = false;
            break;
        }
    }
    F0R(i, n) cout << ans[i] << endl;
    if (flag) {
        cout << "YES" << endl;
        F0R(k, sz(ans)) cout << ans[k] << " ";
        cout << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}