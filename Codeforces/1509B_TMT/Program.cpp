#include <iostream>
#include <string>
#include <cctype>
#define ll long long

using namespace std;

int main() {
    int t, n, at, am;
    at = 0;
    am = 0;
    string s;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n >> s;
        for (int j = 0; j < n; j++) {
            if (s[j] == 'T') {
                at++;
            } else if (s[j] == 'M') {
                am++;
                
            }
        }
        if (at / am == 2) {
            
        } else {
            cout << "NO" << endl;
        }
        at = 0;
        am = 0;
    }
}