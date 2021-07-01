#include <iostream>
#include <string>
#include <cctype>
#include <cstdio>
#include <algorithm>
#define ll long long

using namespace std;

int main() {
    freopen("paint.in", "r", stdin);
	freopen("paint.out", "w", stdout);
    int a, b, c, d, i;
    cin >> a >> b >> c >> d;
    /* if ((a + b) > (c + d)) {
        i = max(c, d) - min(a, b);
    } else {
        i = max(a, b) - min(c, d);
    } */
    i = max(min(b, d) - max(a, c), 0);
    
    cout << (b - a) + (d - c) - i << endl;
}