/*

描述

Give you two  integers P and Q. Let all divisors of P be X-coordinates. Let all divisors of Q be Y-coordinates.

For example, when P=6 and Q=2, we can get the coordinates (1,1) (1,2) (2,1) (2,2) (3,1) (3,2) (6,1) (6,2).

You should pr int all possible coordinates in the order which is first sorted by X-coordinate when coincides, sorted by Y-coordinate.

输入

One line with two  integers P and Q(1 <= P, Q <= 10000).

输出

The output may contains several lines , each line with two  integers Xi and Yi, denoting the coordinates.

样例输入

6 2

样例输出

1 1
1 2
2 1
2 2
3 1
3 2
6 1
6 2

*/

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
	 int x,y;
	cin>>x>>y;
	vector < int> dx;
	vector < int> dy;
	for ( int i=1;i<=sqrt(x);i++)
	{
		if (x%i == 0)
			dx.push_back(i);

	}
	 int xs=dx.size()-1;
	for ( int i=xs;i>=0;i--)
	{
		if (dx[i]!=(x/dx[i]))
		dx.push_back(x/dx[i]);
	}
	for ( int i=1;i<=sqrt(y);i++)
	{
		if (y%i == 0)
		{
			dy.push_back(i);

		}
	}
	 int ys=dy.size()-1;
	for ( int j=ys;j>=0;j--)
	{
		if (dy[j]!=(y/dy[j]))
		dy.push_back(y/dy[j]);
	}

	for ( int i=0;i<dx.size();i++)
		for( int j=0;j<dy.size();j++)
			cout<<dx[i]<<" "<<dy[j]<<endl;
		
		return 0;
}