/*小Hi最近在追求一名学数学的女生小Z。小Z其实是想拒绝他的，但是找不到好的说辞，于是提出了这样的要求：对于给定的两个正整数N和M，小Hi随机选取一个N的约数N'，小Z随机选取一个M的约数M'，如果N'和M'相等，她就答应小Hi。

小Z让小Hi去编写这个随机程序，到时候她review过没有问题了就可以抽签了。但是小Hi写着写着，却越来越觉得机会渺茫。那么问题来了，小Hi能够追到小Z的几率是多少呢？
*/

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<long> ty(long n)
{
	vector<long> array;
	
	for (long i=1;i<sqrt(n);i++)
	{
		if (n % i == 0)
			array.push_back(i);
	}
	long k=array.size();
	if (long (sqrt(n))*long (sqrt(n)) == n)
		array.push_back(long (sqrt(n)));
	for (long i=k;i>0;i--)
	array.push_back(n /array[i-1]);
    return array;
}

long gcd(long a,long b)
{
	if (a%b == 0)
		return b;
	else if (b>(a-b))
		return gcd(b,a-b);
	else return (a-b,b);
}
int main()
{
	long long n,m;
	cin>>n>>m;
	vector<long> a=ty(n);
	vector<long> b=ty(m);
	long count=0;
	// for (int i=0;i<a.size();i++)
	// 	cout<<a[i];
	// cout<<endl;
	// for (int j=0;j<b.size();j++)
	// 	cout<<b[j];
	long i=0;
	long j=0;
	while ((i<=a.size())&&(j<=b.size()))
	{
		if (a[i]==b[j])
		{
			count++;
			i++;
			j++;
		}
		else if (a[i]>b[j])
		{
			j++;
		}
		else if (a[i]<b[j])
		{
			i++;
		}
	}
long tt=a.size()*b.size();
		cout<<tt/gcd(tt,count)<<" "<<count/gcd(tt,count);
	cin>>n;
	return 0;


}