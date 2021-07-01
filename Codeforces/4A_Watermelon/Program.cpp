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

using namespace std;

int main() {
    int w;
    cin >> w;
    if (w % 2 == 0 && w > 2) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}