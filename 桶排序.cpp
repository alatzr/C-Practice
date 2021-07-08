# include <iostream>

using namespace std;

const int N = 1000;

int main()
{
	int n, x, a[N]={0};
	cin >> n;
	for (int i = 0; i < n; i ++)
	{
		cin >> x;   
		a[x]++;  // 将读入的数据放入对应的桶
	}
	
	for (int i = 0; i < n; i ++)
		while (a[i] > 0)   // 处理重复元素
		{
			cout << i << ' ';
			a[i]--;
		}
	
	return 0;
}

// 时空间 O(n)/O(n)

