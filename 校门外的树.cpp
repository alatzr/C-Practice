# include <bits/stdc++.h>

using namespace std;

const int N = 10000+10;
int a[N];


int main()
{	
	int l, m, u, v, cnt;
	cin >> l >> m;
	for(int i = 0; i <= l; i ++) a[i] = 1;
	for(int i = 0; i < m; i ++)
	{   
		cin >> u >> v;
		for(int j = u; j <= v; j++)
		{
			if (a[j] == 1)
				a[j] = 0;
		}
	}
	for(int i = 0; i <= l; i ++) if(a[i] == 1) cnt ++;
	cout << cnt;

	return 0;
} 
