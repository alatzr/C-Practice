# include<iostream>
using namespace std;

const int MAXN = 10001; //数组长度
int main(){
	int n,k,i,j;
	float  temp, a[MAXN];
	cout<<"要排序几个数？"<<endl;
	cin>>n;
	cout<<"具体数值，用空格隔开："<<endl;
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<n;i++){
		k = i;
		for(j=i+1;j<n;j++)
			if(a[j] < a[k]) k=j; //k保存了未排序最小值索引 
		if (k != i){
			temp = a[i];
			a[i] = a[k];
			a[k] = temp;
		}
	}
	cout<<"排序结果如下："<<endl;
	for(i=0;i<n;i++)
		cout<<a[i]<<"";
	return 0;
}