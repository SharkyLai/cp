#include <iostream>
#include <vector>
using std::vector;
using std::cin;
using std::cout;

void setbomb(int x, int y, int n, int m, vector<vector<int> > &ans)
{
	if (x > 0)
	{
		if (y > 0)
			ans[x - 1][y - 1]++;
		ans[x - 1][y]++;
		if (y < m - 1)
			ans[x - 1][y + 1]++;
	}
	if (x < n - 1)
	{
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
void usaco(std::string prob) {
        freopen((prob + ".in").c_str(), "r", stdin);
        freopen((prob + ".out").c_str(), "w", stdout);
    }
    
int main(int argc, char *argv[])
{
    usaco("mine");
	int n, m;
	cin >> n >> m;
	vector<vector<char> > v(n, vector<char>(m));
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> v[i][j];
		}
	}
	vector<vector<int> > ans(n, vector<int>(m));
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
		{
			if (v[i][j] == '*')
				setbomb(i, j, n, m, ans);
		}
	for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (v[i][j] == '*') {
                cout << '*';
            } else {
                cout << ans[i][j];
            }
        }
        cout << std::endl;
    }
	return 0;
}