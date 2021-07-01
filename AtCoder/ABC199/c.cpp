#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
#define ll long long

using namespace std;

int main() {
    int n, q, t, a, b;
    bool f = false;
    string s, s2;
    cin >> n >> s >> q;
    for (int i = 0; i < q; i++) {
        cin >> t >> a >> b;
        if (t == 2) {
            f = !f;
        } else {
            
                a--;
                b--;
            // s2 = s;
            // swap<char>(s2[a], s2[b]);
                swap(s[a], s[b]);
            cout << s << endl;
        }
    }
    if (f) {
        s=s.substr(n)+s.substr(0,n);
    }
    cout << s << endl;
}