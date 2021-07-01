#include <iostream>
#include <string>
#include <cctype>
#include <cstdio>
#include <algorithm>
#define ll long long

using namespace std;

int main() {
    ll n, n2, ans = 0;
    cin >> n;
    for (int i = 0; i < n - 1; i++) {
        cin >> n2;
        ans += n2;
    }
    ans = (n*(n+1))/2 - ans;
    cout << ans;
}