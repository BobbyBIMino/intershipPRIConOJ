/*
描述
给定n个关于X的不等式，问最多有多少个成立。
每个不等式为如下的形式之一：
X < C
X <= C
X = C
X > C
X >= C
输入
第一行一个整数n。
以下n行，每行一个不等式。
数据范围:
1<=N<=50,0<=C<=1000
输出
一行一个整数，表示最多可以同时成立的不等式个数。
样例输入
4
X = 1
X = 2
X = 3
X > 0
样例输出
2
*/

#include <iostream>
#include <string>
using namespace std;


int main()
{
	int n;
	string str;
	cin>>n;
	int * c= new int[n];
	string *sign =new string[n];	
	for(int i=0;i<n;i++)
	{
		cin>>str>>sign[i]>>c[i];
	
	}
	int max=0;
	for (double  i=-1;i<=1001;i+=0.5)
	{
		int cur=0;
		for (int j=0;j<n;j++)
		{
			 if ((sign[j]=="=")&&(i==c[j])) cur++;
			 if ((sign[j]=="<=")&&(i<=c[j])) cur++;
			 if ((sign[j]==">=")&&(i>=c[j])) cur++;
			 if ((sign[j]=="<")&&(i<c[j])) cur++;
			 if ((sign[j]==">")&&(i>c[j])) cur++;

		}
		if (cur>max)
			max=cur;
	}
			delete [] c;
		delete [] sign;	
	cout<<max;
	return 0;

	
}

