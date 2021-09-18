int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    ll n, m; cin >> n >> m; vll ans;
    if (n == 1) {
        cout << m << endl;
        return 0; 
    } else if (n == 2)  {
        if (m != 0) {
            cout << m << " " << 0 << endl;
        } else {
            cout << 1 << " " << -1 << endl;
        }
        return 0;
    }
    if (m == 0) {
        if (n % 2 == 0) {
            for (ll i = 1; i <= n / 2; i++) {
                cout << i << " " << (-1 * i) << " ";
            }
            cout << endl;
        } else {
            for (ll i = 1; i <= (n - 1) / 2; i++) {
                cout << i << " " << (-1 * i) << " ";
            }
            cout << 0 << endl;
        }
        return 0;
    }
    if (n % 2 == 0 && m % 2 == 0) {
        cout << n / 2 + m << " " << -1 * (n / 2) << " ";
        for (ll i = 1; i <= (n / 2) - 1; i++) {
            cout << i << " " << (-1 * i) << " ";
        }
        cout << endl;
    } else if (n % 2 == 1 && m % 2 == 0) {
        cout << n / 2 + m << " " << -1 * (n / 2) << " ";
        for (ll i = 1; i <= (n / 2) - 1; i++) {
            cout << i << " " << (-1 * i) << " ";
        }
        cout << 0 << endl;
    } else if (n % 2 == 1 && m % 2 == 1) {
        cout << (n / 2) + m << " " << -1 * (n / 2) << " ";
        for (ll i = 2; i <= (n / 2); i++) {
            cout << i << " " << (-1 * i) << " ";
        }
        cout << 0 << endl;
    } else if (n % 2 == 0 && m % 2 == 1) {
        cout << (n / 2) + m << " " << -1 * (n / 2) << " ";
        for (ll i = 2; i <= (n / 2); i++) {
            cout << i << " " << (-1 * i) << " ";
        }
    }
    return 0;
}