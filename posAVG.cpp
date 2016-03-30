/*首先输入要输入的整数个数n，然后输入n个整数。输出为n个整数中负数的个数，和所有正整数的平均值。*/

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main()
{
	int n;
	int temp;
	while(cin>>n)
	{
		int sum=0;
		int count=0;
		int count2=0;
		for (int i=0;i<n;i++)
		{
			cin>>temp;
			if (temp<0)
				count++;
			else if (temp>0)
				sum+=temp;
			else count2++;
		}
		cout<<count<<" "<<fixed<<setprecision(1)<<double(sum)/(n-count-count2)<<endl;
	}
	return 0;
}