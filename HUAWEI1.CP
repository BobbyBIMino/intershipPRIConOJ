#include <iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int count=0;
	if(n<=0)
		cout<<-1;
	else
	{
	while(n%2 == 0)
	{
		n=n/2;
		count++;
	}
	cout<<count;

	}

	cin>>n;
}