#include <iostream>
#include <vector>

using namespace std;

void setbomb(int x, int y, int n, int m, vector<vector<int> > &ans) {
	if (x > 0) {
		if (y > 0)
			ans[x - 1][y - 1]++;
		ans[x - 1][y]++;
		if (y < m - 1)
			ans[x - 1][y + 1]++;
	}
	if (x < n - 1) {
		if (y > 0)
			ans[x + 1][y - 1]++;
		ans[x + 1][y]++;
		if (y < m - 1)
			ans[x + 1][y + 1]++;
	}
	if (y > 0)
		ans[x][y - 1]++;
	if (y < m - 1)
		ans[x][y + 1]++;
}
    
int main() {
	long long n, m; long long t = 0;
	while (cin >> n >> m) {
        if (n == 0 && m == 0) return 0; 
        if (t > 0) {
            cout << endl;
        }
        t++;
        vector<vector<char> > v(n, vector<char>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> v[i][j];
            }
        }
        vector<vector<int> > ans(n, vector<int>(m, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (v[i][j] == '*')
                    setbomb(i, j, n, m, ans);
            }
        }
        cout << "Field #" << t << ":" << endl;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (v[i][j] == '*') {
                    cout << '*';
                } else {
                    cout << ans[i][j];
                }
            }
            cout << endl;
        }
    }
	return 0;
}