# include<iostream>
using namespace std;

const int MAXN = 10001; //���鳤��
int main(){
	int n,k,i,j;
	float  temp, a[MAXN];
	cout<<"Ҫ���򼸸�����"<<endl;
	cin>>n;
	cout<<"������ֵ���ÿո������"<<endl;
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<n;i++){
		k = i;
		for(j=i+1;j<n;j++)
			if(a[j] < a[k]) k=j; //k������δ������Сֵ���� 
		if (k != i){
			temp = a[i];
			a[i] = a[k];
			a[k] = temp;
		}
	}
	cout<<"���������£�"<<endl;
	for(i=0;i<n;i++)
		cout<<a[i]<<"";
	return 0;
}