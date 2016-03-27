
#include<iostream>
using namespace std;



int fib(int n)
{
	if (n<0)
	{
		cout<<"error"<<endl;
		return -1;
	}
	else if (n == 0)
	{
		cout <<0<<" ";
		return 0;
	}
	else if (n == 1)
	{
		cout<<"1";
		return 1;
	}
	else
	{
		int a=0;
		int b=1;
		int c=1;
    cout<<"0 1 ";
	for (int i=2;i<n;i++)
	{
		c=a+b;
		a=b;
		b=c;
		
		cout<<c<<" ";
	}
	return c;
}

}
int main()
{
	int number;
	cin >> number;
	fib(number);
	cin>>number;	


}
