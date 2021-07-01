#include <iostream>
#include <string>
#include <cctype>
#define ll long long

using namespace std;

int main() {
    ll n;
    cin >> n;
    while (n != 1) {
        cout << n << " ";
        if (n % 2 == 0) {
            n /= 2;
        } else if (n % 2 == 1) {
            n = 3*n + 1;
        }
    }
    cout << "1";
}