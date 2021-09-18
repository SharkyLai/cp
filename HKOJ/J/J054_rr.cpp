#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n;
    cin >> n;
    int count = 0;
    bool flag = true;
    vector<int> p1(n); // my cows
    vector<int> p2(n); // enemy cows
    vector<int> c;
    for (int i = 0; i < n; i++) {
        cin >> p1[i];
    }
    for (int j = 0; j < n; j++) {
        cin >> p2[j];
    }
    sort(p1.begin(), p1.end());
    sort(p2.begin(), p2.end());
    for (int k = 0, l = 0; k < n && l < n;) {
        if (p1[k] > p2[l]) {
            k++; l++; count++;
        } else {
            k++;
        }
    }
    cout << count << endl;
    return 0;
}