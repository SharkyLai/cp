    #include <iostream>
    #include <iomanip>
    #include <algorithm>
    using namespace std;
    int main() {
        ios_base::sync_with_stdio(0); cin.tie(0);
        int n; cin >> n; int v[n]; int sum = 0; int m = -1;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            sum += v[i];
            m = max(m, v[i]);
        }
        cout << fixed << setprecision(3) << (double) sum / n << "\n";
        sort(v, v + n);
        if (n % 2 == 1) {
            cout << v[(n-1)/2] << "\n";
        } else {
            if ((v[n/2] + v[(n/2) - 1]) % 2 == 0) {
                cout << (v[n/2] + v[(n/2) - 1]) / 2 << "\n";
            } else {
                cout << fixed << setprecision(1) << (double) (v[n/2] + v[(n/2) - 1]) / 2 << "\n";
            }
        }
        m++;
        int count[m];
        for (int i = 0; i < m; i++) {
            count[i] = 0;
        }
        for (int i = 0; i < n; i++)
            count[v[i]]++;
        int mode;
        int k = count[0];
        for (int i = 1; i < m; i++) {
            if (count[i] > k) {
                k = count[i];
                mode = i;
            }
        }
        cout << mode << "\n";
        return 0;
    }