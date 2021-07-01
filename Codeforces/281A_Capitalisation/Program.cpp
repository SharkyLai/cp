#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string s;
    cin >> s;
    if (!isupper(s[0])) {
        s[0] = s[0] - 32;
    }
    cout << s << endl;
}