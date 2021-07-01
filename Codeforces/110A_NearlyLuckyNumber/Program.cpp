#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;
    int dig = s.length();
    int luckydig = 0;
    for (int i = 0; i < dig; i++) {
        if (s[i] == '4' || s[i] == '7') {
            luckydig++;
        }
    }

    if (luckydig == 4 || luckydig == 7) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}