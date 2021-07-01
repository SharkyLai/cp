// http://www.usaco.org/index.php?page=viewproblem2&cpid=591
#include <iostream>
#include <string>
#include <cctype>
#include <cstdio>
#define ll long long

using namespace std;

int main() {
    freopen("promote.in", "r", stdin);
	freopen("promote.out", "w", stdout);
    ll n1, n2, ans, a1 = 0, a2 = 0, a3 = 0;
    for (int i = 0; i < 4; i++) {
        cin >> n1 >> n2;
        if (n2 - n1 == 0) {
            if (i == 1) {
                a1 = 0;
            } else if (i == 2) {
                a2 = 0;
            } else if (i == 3) {
                a3 = 0;
            }
        } else {
            if (i == 1) {
                a1 += n2 - n1;
            } else if (i == 2) {
                a1 += n2 - n1;
                a2 += n2 - n1;
            } else if (i == 3) {
                a1 += n2 - n1;
                a2 += n2 - n1;
                a3 += n2 - n1;
            }
        }
    }
    cout << a1 << endl;
    cout << a2 << endl;
    cout << a3 << endl;
}