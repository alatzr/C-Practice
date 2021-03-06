/*

7
3 8 
8 1 0
2 7 4 4 
4 5 2 6 5

设a[i][j]存放从i,j出发到n层的最大值，
则a[i][j] = max{a[i][j] + a[i][j+1], a[i][j] + a[i+1][j+1]}
循环一次：
7
3 8
8 1 0
7 12 10 10
两次：
7
3 8 
20 13 10
三次：
7
23 21
完成；输出a[0][0]即为正确答案。
30
23 21
20 13 10
7  12 10 10
4  5  2  6  5
*/



# include <iostream>

using namespace std;

const int N = 101;

int main()
{
	int n;
	int a[N][N], b[N][N];
	cin >> n;
	for (int i = 0; i < n; i ++)
		for (int j = 0; j <= i; j ++)
		{
			cin >> a[i][j];
		}
		
	for (int i = n; i >= 0; --i )
		for( int j = 0; j <= i; j++)
		{
			if (a[i+1][j] > a[i+1][j+1]) a[i][j] += a[i+1][j];   
			else a[i][j] += a[i+1][j+1];
		}
	
	cout << a[0][0];
	
	return 0;
}