#include <iostream>
#include <string>
#include <cstring>
#include <cctype>

using namespace std;

int main() {
    string s;
    cin >> s;
    int len = s.length();
    string ans = "NO";
    for (int i = 0; i < len; i++) {
        if (s[i] == 'H' && isupper(s[i])) {
            ans = "YES";
        } else if (s[i] == 'Q' && isupper(s[i])) {
            ans = "YES";
        } else if (s[i] == '9') {
            ans = "YES";
        }
    }
    cout << ans << endl;
}