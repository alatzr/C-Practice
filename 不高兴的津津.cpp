# include <iostream>

using namespace std;

int main()
{
	int day, a, b, temp = 8;
	for(int i = 1; i <= 7; i++)  // 循环判断哪天上课最久，并记录最久天次 
	{
		cin >> a >> b;
		if(a + b > temp)
		{
			temp = a + b;  
			day = i;
		}
	}
	cout << day << endl;
	
	return 0;
}
