/*
描述
小Ho很喜欢在课间去小卖部买零食。然而不幸的是，这个学期他又有在一教的课，而一教的小卖部姐姐以冷若冰霜著称。第一次去一教小卖部买零食的时候，小Ho由于不懂事买了好一大堆东西，被小卖部姐姐给了一个“冷若冰霜”的眼神，食欲都下降了很多。
从那以后，小Ho就学乖了，去小卖部买东西只敢同时买3包以内的零食，并且价格加起来必须是5的整数倍，方便小卖部姐姐算价格。
但是小Ho不擅长计算，所以他把小卖部里所有零食的价格以及他对这个零食的渴望度都告诉了你，希望你能够帮他计算出在不惹恼小卖部姐姐的前提下，能够买到零食的渴望度之和最高是多少？
输入
每个输入文件包含多组测试数据，在每个输入文件的第一行为一个整数Q，表示测试数据的组数。
每组测试数据的第一行为一个正整数N，表示小卖部中零食的数量。
接下来的N行，每行为一个正实数A和一个正整数B，表示这种零食的价格和小Ho对其的渴望度。
一种零食仅有一包。
对于100%的数据，满足1 <= Q <= 10，1<=N<=50，0<A<=10，1<=B<=100。
对于100%的数据，满足A的小数部分仅可能为0.5或0。
输出
对于每组测试数据，输出一个整数Ans，表示小Ho可以获得最大的渴望度之和。
样例输入
1
4
0.5 6
4.5 7
5.0 4
2.0 9
样例输出
17
*/

#include <iostream>
using namespace std;

int main()
{
	int q;
	int n;
	int cur;
	cin>>q;
	while(q--)
	{
		cin>>n;
		int max=0;
		double * price=new double[n];
		int * desire=new int[n];
		for (int i=0;i<n;i++)
			cin>>price[i]>>desire[i];
		for (int i=0;i<n;i++)
		{
			cur=int(price[i]);
			if ((cur-price[i])==0.0)
			{
				if ((desire[i]>max)&&((cur%5)==0))
				{

					max=desire[i];	

				}

			}
		}
		for (int i=0;i<n;i++)
			for (int j=i+1;j<n;j++)
			{
				cur=int(price[i]+price[j]);
				if (cur-(price[i]+price[j])==0.0)
				{
					if (((desire[i]+desire[j])>max)&&((cur%5)==0))
					{

						max=desire[i]+desire[j];		

					}
				}
			}
		for (int i = 0; i < n; ++i)
			for(int j=i+1;j<n;j++)
				for(int k=j+1;k<n;k++)
				{
					cur=int(price[i]+price[j]+price[k]);
					if (cur-(price[i]+price[j]+price[k])==0.0)
					{
						if (((desire[i]+desire[j]+desire[k])>max)&&((cur%5)==0))
						{
							max=desire[i]+desire[j]	+desire[k];	
						}

					}
				}
		cout<<max<<endl;
		delete [] price;
		delete [] desire;
	}
	return 0;
}
