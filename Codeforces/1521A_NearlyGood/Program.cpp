#include <iostream>

using namespace std;
#define ll long long

int main() {
    ll test;
    ll a, b;
    ll x, y, z;
    
    cin >> test;
    for (int i = 0; i < test; i++) {
        cin >> a >> b;
        z = a * b;
        if (b == 2) {
            z = a * 3;
        }
        
        x = a;
        y = (z / a - 1) * a;
        if (b == 1) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
            cout << x << " " << y << " " << z << " " << endl;
        }
    }
}