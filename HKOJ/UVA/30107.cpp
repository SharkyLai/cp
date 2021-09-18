#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define ll long long
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
#define pb push_back
#define pii pair<int, int>
#define endl "\n"

const int inf = 1e9 + 5;
const int MOD = 1e9 + 7;

#define FOR(i, a, b) for (int i=a; i<(b); i++)
#define F0R(i, a) for (int i=0; i<(a); i++)

void insertionSort(ll arr[], ll n) {
    ll i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    ll x; ll a[50005]; ll m = -1; int c = 1; int s = 0;
    while (cin >> x) {
        s++;
        c *= -1;
       /* for (int i = 0; i < s; i++) {
            if (x >= a[i]) {
                for (int j = s; j >= i; j--) {
                    a[j] = a[j-1];
                }
                a[i] = x;
                break;
            }
        } */
        a[s-1] = x; 
        insertionSort(a, s);
        if (c == -1) {
            cout << a[s / 2] << endl;
        } else {
            cout << (a[(s - 1) / 2] + a[s / 2]) / 2 << endl;
        }
    }
    return 0;
}