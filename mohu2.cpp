/*
给定一个递增序列，a1 <a2 <...<an 。定义这个序列的最大间隔为d=max{ai+1 - ai }(1≤i<n),现在要从a2 ,a3 ..an-1 中删除一个元素。问剩余序列的最大间隔最小是多少？


输入描述:
第一行，一个正整数n(1<=n<=100),序列长度;接下来n个小于1000的正整数，表示一个递增序列。

*/

#include <iostream>

using namespace std;
int main()
{
	int n;
	while(	cin>>n)
	{
	int *array=new int[n];
	int *d=new int[n-1];
	int *max=new int[n-2];
	int min=10000;
	for (int i=0;i<n;i++)
	{
		cin>>array[i];

	}
	for (int i=1;i<n;i++)
		d[i-1]=array[i]-array[i-1];
	for (int i=2;i<n;i++)
	{
		max[i-2]=array[i]-array[i-2];

		for (int j=0;j<i-2;j++)
		{
			if (d[j]>max[i-2])
				max[i-2]=d[j];
		}
		for (int j=i;j<n-1;j++)
		{
			if (d[j]>max[i-2])
				max[i-2]=d[j];

		}
	}
	

 for (int i=0;i<n-2;i++)
 {
 	if (max[i]<min)
 	min=max[i];

 }
 cout<<min<<endl;
	delete[] array;
	delete[] d;
	delete[] max;
}
	
	return 0;
}