/*给你一个N*M的矩阵，每个位置的值是0或1，求一个面积最大的子矩阵，这个矩阵必须是一个正方形，且里面只能由1构成，输出最大的正方形边长*/

#include <iostream>
using namespace std;
bool array[401][401];
//计算左上角为(x0,y0),右下角为（x1,y1）的矩阵的元素是否都为1
bool judge(int x0,int y0,int x1,int y1)
{

   for (int i=x0;i<=x1;i++)
   	for (int j=y0;j<=y1;j++)
   		if (!array[i][j])
   			return false;
   		return true;


}
int main()
{
	int n,m;
	
	cin>>n>>m;
	int ni=n;
	if (m<ni)
		ni=m;
	for (int i=0;i<n;i++)
	 for (int j=0;j<m;j++)
	 	cin>>array[i][j];
	 int max=0;
	 for (int i=0;i<n;i++)
	 	for (int j=0;j<m;j++)
	 	{
	 		int k=max;
	 		if (array[i][j])
	 		{
	 			for ( k=max;k<ni-i;k++)
	 				if(!(judge(i,j,i+k,j+k)))
	 					break;
	 		}
	 		if (k>max)
	 			max=k;

	 	}

	 	cout<<max;
	 	cin>>m;
}