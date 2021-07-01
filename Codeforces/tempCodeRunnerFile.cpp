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

/* int reverse(int a[], int n) {
    reverse(a, a + n);
}

int is_sorted(int a[], int n) {
    is_sorted(a, a + n);
} */

int sorted(int arr[], ll n) {
    // Array has one or no element or the
    // rest are already checked and approved.
    if (n == 1 || n == 0)
        return 1;
 
    // Unsorted pair found (Equal values allowed)
    if (arr[n - 1] < arr[n - 2])
        return 0;
 
    // Last pair was sorted
    // Keep on checking
    return sorted(arr, n - 1);
}

void rev(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll n, firstd, lastd;
    cin >> n;
    int arr[n];
    // int revarr[n-1];
    bool yes = false;
    // bool rdiff = true;
    bool fdexist = false;
    bool descending = true;
    // bool ascending = false;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        // cin >> revarr[n-i];
    }
    if (n == 2 && arr[0] == 1 && arr[1] == 2) {
        cout << "yes" << endl;
        cout << "1 1" << endl;
        return 0;
    }
    // cout << sorted(arr, n) << endl;
    // cout << arr[n-1] << endl;
    // rev(revarr, 0, n - 1);
    // cout << rev(revarr, 0, n - 1) << endl;
    // cout << revarr[n-1] << endl;
    // cout << sorted(arr, n) << endl;
   //  cout << sorted(revarr, n) << endl;
    /* for (int i = n - 1; i >= 0; i--) {
        cout << revarr[i] << " ";
    } */
    // cout << revarr[n-1] << endl;
    if (sorted(arr, n) == 1) {
        cout << "yes" << endl;
        cout << "1 1" << endl;
        yes = true;
        // rdiff = false;
    } /*else if (sorted(revarr, n)) {
        cout << "yes" << endl;
        cout << "1 " << n << endl;
        yes = true;
        // rdiff = false; 
    } */
     /* else {
        // code
        yes = true;
    } */
    // cout << sorted(revarr, n);
    // if (rdiff == true) {
        for (int j = 0; j < n; j++) {
            if (arr[j] != j+1 && j+1<n) {
                if (fdexist == false) {
                    firstd = j;
                    fdexist = true;
                    // cout << j << endl;
                }
                lastd = j;
            }
        }
        /* firstd = arr[firstd];
        lastd = arr[lastd]; */
        cout << firstd << " " << lastd << endl;
        // ll dd = lastd - firstd;
        /* for (int k = firstd; k < lastd; k++) {
            if ((arr[k-1] > arr[k])) {
                descending = true;
                // cout << k << endl;
            } 
        } */
        for (int k = firstd; k < lastd; k++) {
            if (arr[k] < arr[k+1]) {
                descending = false;
            }
        }

        if (arr[lastd] < arr[firstd]) {
            int temp = arr[firstd];
            arr[firstd] = arr[lastd];
            arr[lastd] = temp;
        }
        // cout << "desc: " << descending << endl;
        // cout << "asc: " << ascending << endl;
        if (!yes) {
            if (descending == true) {
                cout << "yes" << endl;
                cout << arr[firstd] << " " << arr[lastd] << endl;
            } else if (descending == false) {
                cout << "no" << endl;
            } /* else if (ascending == true) {
                cout << "yes" << endl;
                cout << "1 1" << endl;
            } */
        }

    // }
    // if yes == false
    /* if (descending == false) {
        cout << "no" << endl;
    } */
    return 0;
}