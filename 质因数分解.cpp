/*
��֪������nn��������ͬ�������ĳ˻�������������нϴ���Ǹ�������

�����ʽ
һ��������nn��

�����ʽ
һ��������pp�����ϴ���Ǹ�������

�����������
���� 21 ��� 7 


�⣺ ���������Ѿ�˵�����������ĳ˻�������������Ϊ������
ֻ���ҳ�С���������ٳ������͵õ��������� 
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
