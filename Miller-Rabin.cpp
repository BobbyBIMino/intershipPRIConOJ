/*Miller-Rabin质数测试*/

#include <iostream>
#include <cmath>
using namespace std;


bool Miller(long long n)
{
	int ranNum[12]={2,3,5,7,11,13,17,19,23,29,31,37};
	if (n<=2)
	{
			if (n==2)
			return true;
		return false;

	}

	if (n %2 ==0)
		return false;
	long long  u=n-1;
	while (u%2 ==0)
		u=u/2;
	for (int i=0;i<12;i++)
	{
		cout<<i<<endl;
		int a;
		if (ranNum[i]<=(n-1))
		{
			 a=ranNum[i];
		}
		else return true;
		cout<<i<<endl;
		cout<<u<<endl;
		long long x=1;
		
		cout<<i<<endl;

		while (u<n)
		{
			long long  y=(x*x) % n;
			if ((y == 1)&&(x !=1)&&( x !=(n-1)))
				return false;
			x=y;
			u*=2;
		}
		if (x!=1)
			return false;
	}
	return true;

}

int main()
{
	int n;
	cin>>n;
	long long str;
	for (int i=0;i<n;i++)

	{
		cin>>str;
		cout<<Miller(9223372036854775807);
		if (Miller(str))
			cout<<"Yes"<<endl;
		else cout<<"No"<<endl;

	}
	return 0;
}