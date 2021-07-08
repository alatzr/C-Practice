# c++的练习题
C++练习题

(1)数塔问题
```
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
```
(2)Fibonacci
```
# include <iostream>

using namespace std;

int fib(int n)
{
	int f1 = 1, f2 = 1;
	int f3;
	while(n>2)   // 从第三项开始，后一项等于前两项的和
	{	
		f3 = f1 + f2;  // 递推公式
		f1 = f2;
		f2 = f3;
		n--;
	}
	return f3;
}

int main(){
	
	int n;
	cin >> n;
	cout << fib(n) <<endl;
	
	return 0;
	
}
```
