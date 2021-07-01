#include <iostream>
#include <string>
#include <cctype>
#define ll long long

using namespace std;

int main() {
    int t, n, m, k, ans;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n >> m >> k;
        if (k == n * m - 1) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}