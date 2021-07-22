/*
已知正整数nn是两个不同的质数的乘积，试求出两者中较大的那个质数。

输入格式
一个正整数nn。

输出格式
一个正整数pp，即较大的那个质数。

输入输出样例
输入 21 输出 7 


解： 给出的数已经说明是两个数的乘积，这两个数必为素数，
只需找出小的因数，再除以它就得到大因数了 
*/


# include <bits/stdc++.h>
using namespace std;

//int prime(int n)
//{
//	for (int i = 2; i*i <= n; i++)
//	{
//		if(n % i == 0) return false;
//	}
//	return true;
//}


int main()
{
	int n;
	cin >> n;
	for (int i = 2; i <= n; i ++)
	{
		if (n % i == 0) 
		{
			cout << n / i;
			break;
		}
	}

	return 0;
}
