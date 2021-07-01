#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string str;
    cin >> str;
    int len = str.length();
    int up;
    int down;
    for (int i = 0; i < len; i++) {
        if (isupper(str[i])) {
            up++;
        } else {
            down++;
        }
    }

    if (down >= up) {
        for (int j = 0; j < len; j++) {
            if (isupper(str[j])) {
                str[j] = str[j] + 32;
            }
        }
    } else if (up > down) {
        for (int k = 0; k < len; k++) {
            if (!isupper(str[k])) {
                str[k] = str[k] - 32;
            }
        }
    }

    cout << str << endl;
}