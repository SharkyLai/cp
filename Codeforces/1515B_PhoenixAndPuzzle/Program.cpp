#include <iostream>
#include <string>
#include <cmath>

using namespace std;

bool isSquare(int x){
  int y=sqrt(x);
  return y*y==x;
}

int main() {
    int t, n, n4, n2;
    cin >> t;
    string ans = "NO";
    for (int i = 0; i < t; i++) {
        cin >> n;
        n4 = n / 4;
        n2 = n / 2;
        
        if (n % 2 == 0 && isSquare(n2)) {
            ans = "YES";
        }
        if (n % 4 == 0 && isSquare(n4)) {
            ans = "YES";
        }
        cout << ans << endl;
    }
}