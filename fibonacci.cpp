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