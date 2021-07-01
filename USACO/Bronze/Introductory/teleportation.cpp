// http://www.usaco.org/index.php?page=viewproblem2&cpid=807

#include <iostream>
#include <string>
#include <cctype>
#include <cstdio>
#define ll long long

using namespace std;

int main() {
    freopen("teleport.in", "r", stdin);
	// the following line creates/overwrites the output file
	freopen("teleport.out", "w", stdout);
	// cin reads from the file instead of standard input
    int a, b, x, y, ans;
    cin >> a >> b; 
    cin >> x >> y;
    ans = abs(a-b);
    ans = min(ans, abs(a-x) + abs(b-y));
    ans = min(ans, abs(a-y) + abs(b-x));
    cout << ans << endl;
    return 0;
}