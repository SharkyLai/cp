/* #include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
#define ll long long

using namespace std;

int main() {
    string s;
    cin >> s;
    reverse(s.begin(), s.end());
    for (const auto c: s) {
        if (c == '6') cout << "9";
        else if (c == '9') cout << "6";
        else cout << c;
    }
    string s, s2;
    s2 = "";
    cin >> s;
    int l = s.length() - 1;
    for (int i = l; i >= 0; i--) {
        s2 += s[i];
        if (s2[i] == '6') {
            s2[i] = '9';
        } else if (s2[i] == '9') {
            s2[i] = '6';
        }
    }
    cout << s2 << endl;
} */
