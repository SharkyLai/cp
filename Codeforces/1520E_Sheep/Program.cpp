#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    int t, len;
    cin >> t;
    string s;
    int sheep = 0;
    int sbs = 0;
    int fs = 0;
    int ls = 0;
    int ans = 0;
    int dist = 0;
    int mid;
    for (int i = 0; i < t; i++) {
        sheep = 0;
        sbs = 0;
        fs = 0;
        ls = 0;
        ans = 0;
        
        cin >> len;
        cin >> s;
        for (int j = 0; j < len; j++) {
            if (s[j] == '*') {
                if (sheep == 0) {
                    fs = j;
                }
                ls = j;
                sheep++;
            }
            /* for (int h = 0; h < len; h++) {
                if (s[h] == '*') {
                    ls = h;
                }
            } */
        }
        
        sbs = ls - fs - 1 - sheep + 2;
        mid = ceil(sbs / 2);
        /*if (sbs == 1) {
            ans = 1;
        } else {
            ans = (sbs - 1) * sbs / 2;
        }
        if (sheep == 0 || sheep == 1) {
            cout << 0 << endl;
        } else {
            cout << ans << endl;
        } */
        if (sheep % 2 == 1) {
            dist = mid - (sheep / 2);
        } else {
            dist = mid - sheep / 2 - 1;
        }
        for (int k = 0; k < t; k++) {
            if (s[i] == '*') {
                ans = ans + abs(dist - i);
                dist++;
            }
        }
        cout << ans << endl;
    }
}