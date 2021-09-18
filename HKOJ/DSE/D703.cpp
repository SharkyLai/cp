#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int a[10005]; int b[10005]; int n, h; cin >> n >> h; int curr = h;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++) {
        cin >> b[i];
    }
    while (curr != 0) {
        cout << a[curr] << "\n";
        curr = b[curr];
    }
    cout << "End" << "\n";
    return 0;
}