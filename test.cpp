#include<iostream>
using namespace std;
int main()
{
	long  n;
	// cin>>n;
	int num[4]={0};
	for (long j=4294967270;j<=4294967295;j+=1)
	{
		long temp=j;
		cout<<temp<<" ";
		for (int i=0;i<4;i++)
		{
			num[i]=temp%256;
			temp=temp/256;
		}
	cout<<num[3]<<"."<<num[2]<<"."<<num[1]<<"."<<num[0]<<endl;
	}

	cin>>n;
}