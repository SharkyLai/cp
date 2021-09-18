// Reach CF specialist by [2021 Dec 31]
 
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
 
const int inf = 1e9 + 10;
const int MOD = 1e9 + 7;
 
#define FOR(i, a, b) for (int i=a; i<(b); i++)
#define F0R(i, a) for (int i=0; i<(a); i++)
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int a[100500], an[100500];
    int q;
    cin >> q;
    while(q--)
    {
        int n;
        cin >> n;
        set <int> s;
        bool check = true;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            an[i] = 0;
            s.insert(i + 1);
        }
        an[0] = a[0];
        s.erase(a[0]);
        for (int i = 1; i < n; i++)
        {
            if(a[i] > a[i-1])
            {
                s.erase(a[i]);
                an[i] = a[i];
            }
            else
            {
                if(*s.begin() > a[i])
                    check = false;
                an[i] = *s.begin();
                s.erase(*s.begin());
            }
        }
        if(check == false)
        {
            cout << -1 << '\n';
            continue;
        }
        for (int i = 0; i < n; i++)
            cout << an[i] << ' ';
        cout << '\n';
    }
    return 0;
}