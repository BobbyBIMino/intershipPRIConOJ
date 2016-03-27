/*[编程题] 投篮游戏


有一个投篮游戏。球场有p个篮筐，编号为0，1...，p-1。每个篮筐下有个袋子，每个袋子最多装一个篮球。有n个篮球，每个球编号xi 。规则是将数字为xi 的篮球投到xi 除p的余数为编号的袋里。若袋里已有篮球则球弹出游戏结束输出i，否则重复至所有球都投完。输出-1。问游戏最终的输出是什么？
*/
#include <iostream>
using namespace std;
int main()
{
	int p,n;
	while(	cin>>p>>n)
{
	if (n==0)
		{
			cout<<-1<<endl;
			continue;
		}

	
	long num;
	bool * dai=new bool[p];
	bool flag=false;
	for (int i=0;i<p;i++)
	{
		dai[i]=false;
	}
	for (int i=0;i<n;i++)
	{
		cin>>num;
		if(!dai[num%p])
		{
			dai[num%p]=true;
		}
		else 
		{
			cout<<i+1<<endl;
			flag=true;
			break;
		}


	}
       if (!flag)
		{
			cout<<-1<<endl;
		}
	delete[] dai;
}
	return 0;

}