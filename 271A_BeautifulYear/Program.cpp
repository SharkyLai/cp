#include <iostream>
#include <string>

using namespace std;

int main() {
    int s;
    cin >> s;
    int s1, s2, s3, s4;
    while (!(s1 != s2 && s1 != s3 && s1 != s4 && s2 != s3 && s2 != s4 && s3 != s4)) {
        s++;
        s1 = s / 1000;
        s2 = s / 100 % 10;
        s3 = s / 10 % 10;
        s4 = s % 10;
        if (s1 != s2 && s1 != s3 && s1 != s4 && s2 != s3 && s2 != s4 && s3 != s4) {
            break;
        }
    }
    cout << s << endl;
}