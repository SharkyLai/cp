#include <iostream>
using namespace std;
int main() {
    long long n;
    cin >> n;
    long long count = 0;
    for (long long i = 1; i*(i+1) < 2*n; i++) {
        long double b = (1.0*n-(i*(i+1))/2)/(i+1);
        if (b - (int)b == 0.0) { count++; }
    }
    cout << count << endl;
}