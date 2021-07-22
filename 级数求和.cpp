# include <bits/stdc++.h>

using namespace std;


const int N = 1000000;

int main()
{
	double n;
	int k;
	
	cin >> k;
	for (int i = 1; i <= N; i++)
	{
		n += 1.0 / i;
		if (n > k)
		{
			cout << i;
			break;
		}
	}
	return 0;
} 
