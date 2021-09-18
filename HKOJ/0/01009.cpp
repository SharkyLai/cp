#include <iostream>
#include <cstring>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    string s;
    while (getline(cin, s)) {
        for (int i = 0; i < s.length(); i++) {
            if (isupper(s[i]) || islower(s[i]) || s[i] == ' ') {
                cout << s[i];
            } 
        }
        cout << "\n";
    }
    return 0;
}