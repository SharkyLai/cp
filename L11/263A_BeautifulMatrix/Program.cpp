#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    int a, b, c, d, e, row, column, moves, i, i1;
    for (i = 0; i < 5; i++) {
        cin >> a >> b >> c >> d >> e;
        if (a == 1) {
            column = 1;
            i1 = i + 1;
        } else if (b == 1) {
            column = 2;
            i1 = i + 1;
        } else if (c == 1) {
            column = 3;
            i1 = i + 1;
        } else if (d == 1) {
            column = 4;
            i1 = i + 1;
        } else if (e == 1) {
            column = 5;
            i1 = i + 1;
        }
    }
    moves = abs(i1 - 3) + abs(column - 3);
    cout << moves << endl;
}