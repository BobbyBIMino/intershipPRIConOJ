/*
描述

小Ho给自己定了一个宏伟的目标：连续100天每天坚持在hihoCoder上提交一个程序。100天过去了，小Ho查看自己的提交记录发现有N天因为贪玩忘记提交了。于是小Ho软磨硬泡、强忍着小Hi鄙视的眼神从小Hi那里要来M张"补提交卡"。每张"补提交卡"都可以补回一天的提交，将原本没有提交程序的一天变成有提交程序的一天。小Ho想知道通过利用这M张补提交卡，可以使自己的"最长连续提交天数"最多变成多少天。

输入

第一行是一个整数T(1 <= T <= 10)，代表测试数据的组数。

每个测试数据第一行是2个整数N和M(0 <= N, M <= 100)。第二行包含N个整数a1, a2, ... aN(1 <= a1 < a2 < ... < aN <= 100)，表示第a1, a2, ...  aN天小Ho没有提交程序。

输出

对于每组数据，输出通过使用补提交卡小Ho的最长连续提交天数最多变成多少。
样例输入

3  
5 1  
34 77 82 83 84  
5 2  
10 30 55 56 90  
5 10  
10 30 55 56 90

样例输出

76  
59
100

*/
#include <iostream>
using namespace std;

int main()
{
	int t,m,n;
	cin>>t;
	

	for(int i=0;i<t;i++)
	{
		cin>>n>>m;
		int max=0;
		int cur=0;
		int * space=new int[n];
		for(int j=0;j<n;j++)
		{
			cin>>space[j];
		}

		if(m>=n)
		{
			cout<<100<<endl;
		}else{
			for (int i=m;i<n;i++)
			{
				if((i-m-1)==-1)
					cur=space[i]-1;	
				else 
					cur=space[i]-space[i-m-1]-1;
				if (cur>max)
					max=cur;
			}
			cur=100-space[n-m-1];
			if (cur>=max)
				max=cur;
			cout<<max<<endl;

		}


		delete[] space;
	}
	return 0;
}