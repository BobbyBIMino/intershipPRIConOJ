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
		for (int j = m; j >= need[i]; --j)
		{
			if(j-need[i]>=0)
			{
				if (total[j]<(total[j-need[i]]+value[i]))
				{
					total[j]=total[j-need[i]]+value[i];
				}
			}
		}
	}
    	cout<<total[m];

	 delete[] need;
	 delete[] value;
	 delete[] total;
	return 0;
}