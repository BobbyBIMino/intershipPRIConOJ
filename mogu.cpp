/*
现在有一张半径为r的圆桌，其中心位于(x,y)，现在他想把圆桌的中心移到(x1,y1)。每次移动一步，都必须在圆桌边缘固定一个点然后将圆桌绕这个点旋转。问最少需要移动几步。
*/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int r,x,y,x1,y1;
	while(cin>>r>>x>>y>>x1>>y1)
	{
	double dis=sqrt((x-x1)*(x-x1)+(y-y1)*(y-y1));
	int num=1;
	while(dis>2*r)
	{
		num++;
		dis=dis-2*r;
	}
	cout<<num<<endl;

	}

}