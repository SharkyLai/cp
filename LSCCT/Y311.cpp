#include <iostream>
#include <cmath>
using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll n;
    cin >> n;
    bool flag = true;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            flag = false;
        }
    }
    if (flag) {
        cout << "Prime" << endl;
    } else {
        cout << "Composite" << endl;
    }
    return 0;
}