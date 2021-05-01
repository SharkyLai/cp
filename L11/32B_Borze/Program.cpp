// Digit 0 is transmitted as «.», 1 as «-.» and 2 as «--».
#include <iostream>
#include <string>

using namespace std;

int main() {
    string s, s2;
    cin >> s;
    int length = s.length();
    
    for (int i = 0; i < length; i++) {
        if (s[i] == '.') {
            s2 += '0';
        }
        if (s[i] == '-' && s[i + 1] == '.') {
            s2 += '1';
            ++i;
        }
        if (s[i] == '-' && s[i + 1] == '-') {
            s2 += '2';
            ++i;
        }
    }
    cout << s2 << endl;
}
