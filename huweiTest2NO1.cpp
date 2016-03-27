#include<iostream>
using namespace std;
int main()
{
	long n;

	cin>>n;
	int num[4]={0};
		for (int i=0;i<4;i++)
		{
			num[i]=n%256;
			n=n/256;
		}
	cout<<num[3]<<"."<<num[2]<<"."<<num[1]<<"."<<num[0];

}