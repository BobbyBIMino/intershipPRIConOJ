#include <iostream>
using namespace std;

int main()
{
	int m,n;
	cin>>n>>m;
	int *need=new   int[n];  
	int *value=new int[n];
	int *total=new int[m+1];

	for (int i = 0; i < n; ++i)
	{
		cin>>need[i]>>value[i];
	}
	for (int i = 0; i <= m; ++i)
	{
		total[i]=0;
	}
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j <= m; ++j)
		{
			if (need[i]<=j)
			{
				if ((total[j-need[i]]+value[i])>total[j])
				{
					total[j]=total[j-need[i]]+value[i];
				}
			}
		}
	}
	int max=0;
	for (int i=0;i<=m;i++)
	{
		if (max<total[i])
			max=total[i];
	}
	cout<<max;
	 delete[] need;
	 delete[] value;
	 delete[] total;
	return 0;
}