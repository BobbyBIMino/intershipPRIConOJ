/*

正整数A和正整数B 的最小公倍数是指 能被A和B整除的最小的正整数值，设计一个算法，求输入A和B的最小公倍数。
*/

#include <iostream>
using namespace std;
int gcd(int a,int b)
{
	if (a%b == 0)
		return b;
	else 
	{
		if ((a-b)>b)
			return gcd(a-b,b);
		else return gcd(b,a-b);

	}
}
int main()
{
	int a,b;
	while(cin>>a>>b)
	{
		if (a<b)
		{
			int temp;
			temp=a;
			a=b;
			b=temp;
		}
		cout<<(a*b)/gcd(a,b)<<endl;
	}
	return 0;
}