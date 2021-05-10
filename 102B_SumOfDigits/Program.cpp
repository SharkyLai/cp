#include <iostream>
#include <string>

using namespace std;

int main() {
    string n;
    cin >> n;
    int len, i;
    int res = 0;
    int ans;
    while (n.length() > 1) {
        for (i = 0; i < n.length(); i++) {
            res += n[i] - '0';
            n = res;
            if (res < 10) {
                ans = i + 1;
            }
            res = 0;
        }
    }
    cout << ans << endl;
}