/*完全数（Perfect number），又称完美数或完备数，是一些特殊的自然数。

它所有的真因子（即除了自身以外的约数）的和（即因子函数），恰好等于它本身。

例如：28，它有约数1、2、4、7、14、28，除去它本身28外，其余5个数相加，1+2+4+7+14=28。

给定函数count(int n),用于计算n以内(含n)完全数的个数。计算范围, 0 < n <= 500000

返回n以内完全数的个数。异常情况返回-1
*/

#include <iostream>
#include <cmath>
using namespace std;


int main()
{
	 int n;
   while (cin>>n)
	 
	 if (n<6)
	 	cout<<0<<endl;
	 else if (n<28)
	 	cout<<1<<endl;
	 else if (n<496)
	 	cout<<2<<endl;
	 else if (n<8128)
	 	cout<<3<<endl;
	 else cout<<4<<endl;
	 return 0;

}
