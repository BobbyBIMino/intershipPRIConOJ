#include <iostream>
#include <string>
#include <cmath>
#include <vector>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for (int i=0;i<t;i++)
	{
		int n,p,w,h;
		int size;
		long sum=0;
		cin>>n>>p>>w>>h;
		int *para=new int [n];
		for (int j=0;j<n;j++)
		{
			cin>>para[j];
			sum+=para[j];
		}
		size=sqrt((p*w*h)/sum);
		sum=0;
		int ans=1;
		for (int j=size;j>=1;j--)
		{
			sum=0;

			int a=floor(w/j);  //每行字符数
			int b=floor(h/j);  //每页行数
			for (int k=0;k<n;k++)
				sum+=ceil(float(para[k])/float(a));  //行数之和
			if (ceil(float(sum)/float(b))<=p)
			{
				ans=j;
				break;
			}


		}

		cout<<ans<<endl;

		delete[] para;
	}



	return 0;
}