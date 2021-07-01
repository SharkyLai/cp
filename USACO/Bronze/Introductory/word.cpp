#include <iostream>
#include <string>
#include <cctype>
#include <cstdio>
#include <algorithm>
#define ll long long

using namespace std;

int main() {
    freopen("word.in", "r", stdin);
	freopen("word.out", "w", stdout);
    int n, k, c = 0, f = 0;
    string s;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> s;
        c += s.length();
        if (k < c) {
            cout << "\n";
            c = s.length();
            cout << s;
        } else {
            if (f == 0) {
                cout << s;
            } else {
                cout << " " << s;
            }
            f = 1;
        }
    }
}