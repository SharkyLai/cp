#include <iostream>
#include <string>
#include <cctype>
#define ll long long

using namespace std;

int main() {
    int t, k, ans;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> k;
        if (100 % k == 0) {
            ans = 100 / k;
        } else {
            ans = 100;
            if (k % 2 == 0) {
                ans = 50;
            } 
            if (k % 4 == 0) {
                ans = 25;
            } 
            if (k % 5 == 0) {
                ans = 20;
            } 
            if (k % 10 == 0) {
                ans = 10;
            } 
            if (k % 20 == 0) {
                ans = 5;
            } 
            if (k % 25 == 0) {
                ans = 4;
            }
        }
        cout << ans << endl;
    }
}