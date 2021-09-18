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

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    stack<ll> a; stack<ll> b;
    string s; cin >> s; ll len = s.length();
    for (ll i = 0; i < len; i++) {
        if (s[i] == '(') {
            a.push(i);
        } else if (s[i] == ')') {
            b.push(i);
        }
    }
    stack<ll> c = a;
    for (ll i = 0; i < sz(c); i++) {
        if (s[a.top() - 1] == '-') {
            for (ll j = a.top(); j < b.top(); j++) {
                if (j < len - 1) {
                    if (s[j] == '(' && (s[j+1] == '+' || s[j+1] == '-')) {
                        if (j < b.top() -2) {
                            j += 2;
                        }
                    }
                }
                if (s[j] == '+') {
                    s[j] = '-';
                } else if (s[j] == '-') {
                    s[j] = '+';
                }
            }
        }
        a.pop(); b.pop();
    }
    for (ll i = 0; i < len; i++) {
        if (s[i] != '(' && s[i] != ')') {
            if ((s[i] == '-' || s[i] == '+') && s[i+1] == '(' && (s[i+2] == '-' || s[i+2] == '+')) {
                if (s[i] == '-') {
                    if (s[i+2] == '+') {
                        cout << '-';
                    } else if (s[i+2] == '-') {
                        cout << '+';
                    }
                } else if (s[i] == '+') {
                    if (s[i+2] == '-') {
                        cout << '-';
                    } else if (s[i+2] == '+') {
                        cout << '+';
                    }
                }
                if (i < len - 2) {
                    i += 2;
                } else {
                    break;
                }
            } else {
                cout << s[i];
            }
        }
    }
    cout << endl;
    return 0;
}