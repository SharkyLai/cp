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
#define fi first
#define se second
const int inf = 1e9 + 10;

#define FOR(i, a, b) for (int i=a; i<(b); i++)
#define F0R(i, a) for (int i=0; i<(a); i++)

int search(int arr[], int x) {
    for (int y = 0; y <= 100; y++) {
        if (arr[y] == x) {
            return y;
        }
    }
}

bool primeCheck(int n) {
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) {
            return false;
        }
	}
	return true;
}

/*void pf(int n) {
    vector<pair<int, int>> f;
    for (int j = 2; j*j <= n; j++) {
        if (primeCheck(j) == true) {
            int power = 0;
            while (n % j == 0) {
                power++; n/= j;
            }
            f.pb({j, power});
        }
    }
    if (n > 1) {
        f.pb({n, 1});
    }
} */

int main() {
    // https://lscct.com/task-T020 life saver LOL
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int prime[100] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61,
    67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 151, 157,
    163, 167, 173, 179, 181, 191, 193, 197, 199, 211, 223, 227, 229, 233, 239, 241, 251, 257,
    263, 269, 271, 277, 281, 283, 293, 307, 311, 313, 317, 331, 337, 347, 349, 353, 359, 367,
    373, 379, 383, 389, 397, 401, 409, 419, 421, 431, 433, 439, 443, 449, 457, 461, 463, 467, 
    479, 487, 491, 499, 503, 509, 521, 523, 541};
    ll n;
    cin >> n;
    ll count = 0;
    bool flag = true;
    for (int k = 1; k <= n; k++) {
        flag = true;
        vector<pair <int, int> > f;
        for (int j = 2; j*j <= n; j++) {
            if (primeCheck(j) == true) {
                int power = 0;
                while (n % j == 0) {
                    power++; 
                    n /= j;
                }
                f.pb(mp(j, power));
            }
        }
        if (n > 1) {
            f.pb(mp(n, 1));
        }

        int size = f.size();
        vector<int> v(size);
        for (int l = 0; l <= size; l++) {
            if (f[l].se != 1) {
                flag = false;
            }
            v.pb(f[l].fi);
            sort(v.begin(), v.end());
            if ((search(prime, v[l]) + 1) == (search(prime, v[l+1]))) {
                flag = false;
            }
        }
        if (flag) {
            count++;
        }  
    }
    cout << count << endl;
    return 0;
}