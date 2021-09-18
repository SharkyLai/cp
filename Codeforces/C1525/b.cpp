#include <iostream>
#include <string>
#include <cctype>
#define ll long long

using namespace std;

int main() {
    int t, n, olda, a, ans;
    int corr;
    bool asc = true;
    olda = 0;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n;
        for (int j = 1; j = n; j++) {
            cin >> a;
            if (olda > a) {
                asc = false;
            }
            if (j == a && j != 1 && j != n) {
                corr++;
            }
            olda = a;
        }

        if (asc == true) {
            ans = 0;
        } 

        cout << ans << endl;
    }
}