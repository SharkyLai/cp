#include <iostream>

using namespace std;

int main() {
    int n, v, n1, v1, ans = 0;
    int a[49];
    ans = 0;
    cin >> n >> v;
    for (int i = 0; i < n; i++) {
        cin >> n1;
        for (int j = 0; j < n1; j++) {
            cin >> v1;
            if (v > v1) {
                a[ans] = n1;
                ans++;
            }
        }
    }
    cout << ans << endl;
    for (int k = 0; k < ans; k++) {
        cout << a[k] << " ";
    }
    return 0;
}