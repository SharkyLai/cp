#include <iostream>
#include <iomanip>
#include <fstream>
#include <vector>
#include <array>
#include <algorithm>
#include <utility>
#include <map>
#include <queue>
#include <set>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <string>
#define ll long long

using namespace std;

int main() {
    string s;
    cin >> s;
    int ans = 1;
    for (int i = 1, count = 1; i < s.length(); i++) {
        if (s[i] == s[i-1]) {
            count++;
            ans = max(ans, count);
        } else {
            count = 1;
        }
    }
    cout << ans;
}