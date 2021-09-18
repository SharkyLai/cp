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

bool isComposite(int n)
{
    // Corner cases
    if (n <= 1)  return false;
    if (n <= 3)  return false;
  
    // This is checked so that we can skip
    // middle five numbers in below loop
    if (n%2 == 0 || n%3 == 0) return true;
  
    for (int i=5; i*i<=n; i=i+6)
        if (n%i == 0 || n%(i+2) == 0)
           return true;
  
    return false;
}

void printDivisors(int n)
{
    // Note that this loop runs till square root
    for (int i=2; i<=sqrt(n); i++)
    {
        if (n%i == 0)
        {
            // If divisors are equal, print only one
            if (n/i != i) {
                cout << i << " " << n/i << endl;
                return;
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        ll tmp = n;
        if (n == 5) {
            cout << 2 << " " << 4 << endl;
        } else {
            for (ll i = 1; i < n; i++) {
                tmp = n;
                tmp -= i;
                if (isComposite(tmp)) {
                    printDivisors(tmp);
                    break;
                }
            }   
        }
    }
    return 0;
}