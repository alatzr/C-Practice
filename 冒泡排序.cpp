# include<iostream>
using namespace std;
const int MAXN = 10001;
int main()
{
	int n,i,j;
	float temp, a[MAXN];
	cout<<"���������Ԫ�ظ�����"<<"";
	cin>>n;
	cout<<"���������ֵ���ո����"<<endl;
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=n-1;i>0;i--)
	{
		for (j=0;j<i;j++)
		{
			if (a[j]>a[j+1])  //���򣬽����л�Ϊ<
				swap(a[j], a[j+1]);
		}
	}
	cout<<"���������£�"<<endl;
	for(i=0;i<n;i++)
		cout<<a[i]<<" ";
	return 0;
}
/*
# python����

a = input().split()

for i in range(len(a)-1,0,-1):
    for j in range(i):
        if a[j] > a[j+1]:
            a[j], a[j+1] = a[j+1], a[j]
print(a)

*/