#include <iostream>
using namespace std;
void sprialprint(int a[10][10], int n, int m)
{
	int sr = 0, sc = 0; er = n-1; ec = m-1;
	int cnt = 1;
	while (sr <= er and sc <= ec)
	{
		for (int col = sr; col <= ec; col++)
		{
			cout << a[sr][col] << ",";
			cnt ++;
			if (cnt > n*m) {
				break;
			}
		}
		sr++;
		for (int row = sr; row <= er; row++)
		{
			cout << a[row][ec] << ",";
			cnt++;
			if (cnt > n*m) {
				break;
			}
		}
		ec--;
		if (sr < er)
		{
			for (int row = er; row >= sr; row--)
			{
				cout << a[row][sc] << ",";
				cnt++;
				if (cnt > n*m) {
					break;
				}
			}
			sc++;
		}
	}
	cout << "END";
	cout << endl;
}
int main () {
	int a[10][10];
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> a[i][j];
		}
	}
	sprialprint(a,n,m);
	return 0;
}