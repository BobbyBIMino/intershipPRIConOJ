#include <iostream>
using namespace std;

int main()
{
	bool bit[10]={false};
	int n;
	int temp;
	cin>>n;
	while(n != 0)
	{
		temp=n%10;
		if(!bit[temp])
		{
			bit[temp]=true;
			cout<<temp;
		}
		n=n/10;
	}
	cin>>n;
}