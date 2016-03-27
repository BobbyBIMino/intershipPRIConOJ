#include <iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int * reward=new int[n*n];
	int * total =new int [n+1];
	for(int i=0;i<n;i++)
	{
		
		for (int j=0;j<=i;j++)
		{
			cin>>reward[i*n+j];
			
		}
			
	}

	total[0]=reward[0];
	for (int i=1;i<n;i++)
	{

		for (int j=i;j>=0;j--)
		{
			if(j==0)
				total[j]=total[j]+reward[i*n+j];
			 else if (j==i)			
				total[j]=total[j-1]+reward[i*n+j];			
			else 
			{ 
				if(total[j-1]>total[j])
				{
					total[j]=total[j-1];
				}
				total[j]=total[j]+reward[i*n+j];

			}
		}

	}
	int max=total[0];

	for (int i=0;i<n;i++)
	{
		if(total[i]>max)
		{
			max=total[i];
		}
	}
	cout<<max<<endl;
}