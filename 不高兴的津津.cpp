# include <iostream>

using namespace std;

int main()
{
	int day, a, b, temp = 8;
	for(int i = 1; i <= 7; i++)  // ѭ���ж������Ͽ���ã�����¼������ 
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
