/*
描述

The circus clown Sunny has a magic box. When the circus is performing, Sunny puts some balls into the box one by one. The balls are in three colors: red(R), yellow(Y) and blue(B). Let Cr, Cy, Cb denote the numbers of red, yellow, blue balls in the box. Whenever the differences among Cr, Cy, Cb happen to be x, y, z, all balls in the box vanish. Given x, y, z and the sequence in which Sunny put the balls, you are to find what is the maximum number of balls in the box ever.

For example, let's assume x=1, y=2, z=3 and the sequence is RRYBRBRYBRY. After Sunny puts the first 7 balls, RRYBRBR, into the box, Cr, Cy, Cb are 4, 1, 2 respectively. The differences are exactly 1, 2, 3. (|Cr-Cy|=3, |Cy-Cb|=1, |Cb-Cr|=2) Then all the 7 balls vanish. Finally there are 4 balls in the box, after Sunny puts the remaining balls. So the box contains 7 balls at most, after Sunny puts the first 7 balls and before they vanish.

输入

Line 1: x y z

Line 2: the sequence consisting of only three characters 'R', 'Y' and 'B'. 

For 30% data, the length of the sequence is no more than 200.

For 100% data, the length of the sequence is no more than 20,000, 0 <= x, y, z <= 20.

输出

The maximum number of balls in the box ever.

*/

/*

*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
	int a1=0;int a2=0;int a3=0;
	/*
	d1=cr-cy;
	d2=cy-cb;
	d3=cb-cr;
	*/
	int d1=0;int d2=0;int d3=0;
	int max=0;
	int x,y,z;
	string s;
	int len=0;
	cin>>x>>y>>z;
	cin>>s;
	for (unsigned int i=0;i<s.length();i++)
	{
		if (s[i]=='R')
		{
			d1++;
			d3--;
		}
		if (s[i]=='Y')
		{
			d1--;
			d2++;
		}
		if (s[i]=='B')
		{
			d2--;
			d3++;
		}
		a1=abs(d1);
		a2=abs(d2);
		a3=abs(d3);
		//符合条件

		len++;
		if (len>max)
		max=len;
		if (((x==a1)&&(y==a2)&&(z==a3))||((x==a1)&&(y==a3)&&(z==a2))||((x==a2)&&(y==a1)&&(z==a3))||((x==a2)&&(y==a3)&&(z==a1))||((x==a3)&&(y==a2)&&(z==a1))||((x==a3)&&(y==a1)&&(z==a2)))
		{

			d1=0;
			d2=0;
			d3=0;
					
		
			len=0;
		}


	}

	cout<<max;
	
	
}