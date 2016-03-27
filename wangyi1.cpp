#include <iostream>
using namespace std;

int gcd(int a,int b)
{
	if (b>a)
		return gcd(b,a);
	else if (a%b ==0)
		return b;
	else
		return gcd(b,a-b);
}

int main()
{
	int n,c,b;
	while (cin>>n>>c)
	{


		for (int i=0;i<n;i++)
		{
			cin>>b;
			if (b<=c)
				c+=b;
			else 
				c+=gcd(c,b);
		}
		cout<<c<<endl;

	}
	return 0;
}