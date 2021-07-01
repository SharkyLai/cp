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

#define FOR(i, a, b) for (int i=a; i<(b); i++)
#define F0R(i, a) for (int i=0; i<(a); i++)

int gcd (int a, int b) { while (b) { a %= b; swap(a, b); } return a; }
int lcm (int a, int b) { return a / gcd(a, b) * b; }

bool isPrime(int num){
    if (num == 1) return false;
        for (int i = 2;i<=sqrt(num);i++){
            if(num % i == 0) return false;
        }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll n, x, d = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        /*for (int j = 1; j <= x; j++) {
            if (x % j == 0) {
                d++;
            }
        }
        if (d == 3) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
        d = 0; */
        cout << isPrime(sqrt(x));
        if (isPrime(sqrt(x) && floor(sqrt(x)) == sqrt(x))) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}