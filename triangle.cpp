#include <iostream>
using namespace std;

int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	if ((a>=0)&&(b>=0)&&(c>=0))
	{
		if ((a+b > c)&&(a+c > b)&&(b+nc >a))
		{
			if ((a==b)&&(b==c))
			{
				cout<<"此三角形为等边三角形";
			}
			else if ((a == b)||(b == c)||(c == a))
			{
				cout<<"此三角形为等腰三角形";
			}
			else 
				cout<<"此三角形为一般三角形";

		}
		else cout<<"不构成三角形";
	}
	else cout<<"不构成三角形";
	cin>>a;

}