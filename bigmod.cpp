#include <iostream>
using namespace std;

long long mod(string num, long long a) {
    long long res = 0;
    for (long long i = 0; i < num.length(); i++)
        res = (res * 10 + (long long)num[i] - '0') % a;
 
    return res;
}

int main() {
    return 0;
}