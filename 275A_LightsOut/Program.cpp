#include <iostream>

using namespace std;

int main() {
    int a, b, c, d, e, f, g, h, i;
    int ra, rb, rc, rd, re, rf, rg, rh, ri;
    cin >> a >> b >> c >> d >> e >> f >> g >> h >> i;

    ra = a + b + d;
    rb = a + b + c + e;
    rc = b + c + f;
    rd = a + d + e + g;
    re = b + d + e + f + h;
    rf = c + e + f + i;
    rg = d + g + h;
    rh = e + g + h + i;
    ri = f + h + i;

    if ((ra % 2) == 1) { cout << 0; }
    else { cout << 1; }
    if ((rb % 2) == 1) { cout << 0; }
    else { cout << 1; }
    if ((rc % 2) == 1) { cout << 0 << endl; }
    else { cout << 1 << endl; }
    if ((rd % 2) == 1) { cout << 0; }
    else { cout << 1; }
    if ((re % 2) == 1) { cout << 0; }
    else { cout << 1; }
    if ((rf % 2) == 1) { cout << 0 << endl; }
    else { cout << 1 << endl; }
    if ((rg % 2) == 1) { cout << 0; }
    else { cout << 1; }
    if ((rh % 2) == 1) { cout << 0; }
    else { cout << 1; }
    if ((ri % 2) == 1) { cout << 0 << endl; }
    else { cout << 1 << endl; }

    /* cout << ra << rb << rc << \n;
    cout << rd << re << rf << \n;
    cout << rg << rh << ri << \n; */
}