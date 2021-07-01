/* #include <iostream>
#include <string>

using namespace std;
#define ll long long

int main() {
    int n, k;
    cin >> n >> k;
    int ans;
    if (n % 2 == 0) {
        if ((n / 2) < k) {
            ans = 2 * k - n;
        } else if ((n / 2) == k) {
            ans = n - 1;
        } else if ((n / 2) > k) {
            ans = 2 * k - 1;
        }
    } 
    
    if (n % 2 == 1) {
        if ((n / 2) > k) {
            ans = 2 * k - 1;
        } else if (((n / 2) + 0.5) != k && (n / 2) < k) {
            ans = 2 * k - n - 1;
        } else if (((n / 2) + 0.5) == k) {
            ans = n;
        } else if ((n / 2) == k) {
            ans = n;
        }
    }
    // cout << 2 * (k - (n / 2) - 0.5) << endl;
    cout << ans << endl;
} */

#include <iostream>

using namespace std;

int main()
{
    long long n, k;
    cin >> n >> k;
    if (k <= (n + 1) / 2)
    {
        cout << k * 2 - 1 << endl;
    }
    else
    {
        cout << (k - (n + 1) / 2) * 2 << endl;
    }
    return 0;
}