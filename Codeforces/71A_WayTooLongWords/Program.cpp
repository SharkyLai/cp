#include <iostream> 
#include <string> 
#include <set> 
#include <map> 
#include <stack> 
#include <queue> 
#include <vector> 
#include <utility> 
#include <iomanip> 
#include <sstream> 
#include <bitset> 
#include <cstdlib> 
#include <iterator> 
#include <algorithm>
#include <cstdio> 
#include <cctype> 
#include <cmath> 
#include <math.h> 
#include <ctime> 
#include <cstring>
#include <string>

using namespace std;

int main() {
    int n;
    string s;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> s;
        if (s.length() > 10) {
            cout << s[0] << (s.length() - 2) << s[s.length() - 1] << endl;
        } else {
            cout << s << endl;
        }
    }
}