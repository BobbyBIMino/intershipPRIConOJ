/*
Little Ho is obsessed with a computer game called "Clicker". In this game player spends coins to raise his heroes' level and gains more coins by sending his heroes to defeat monsters. At the beginning all Little Ho's heroes are of level 0 and can do 0 damage to monsters. Raising ith hero from level 0 to level 1 costs Bi coins. Every time raising a hero to the next level costs 1.07 times(round down to the neareast integer) as much as previous time. So Raising ith hero from level X to level X+1 will cost [1.07...[1.07[1.07Bi]]...](repeat X times) coins where "[]" is the rounding function. Raising ith hero to one upper level can also raise his damage by Ai. So raising ith hero to level X will raise his damage to X*Ai.

Given the amount of coins Little Ho has, you are to calculate what is the maximum total damage can be reached by optimizing coin usage. 

*/
/*思路：
泛化背包问题
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;
	int a[31][2];
	int f[20002]={0};
	for (int i=0;i<n;i++)
		cin>>a[i][0]>>a[i][1];
	for (int i=0;i<n;i++)
	{
		
		for (int v=m;v>=0;v--)
		{
			int cost=a[i][1];
			int totalC=cost;

			for (int j=1;j<147;j++)
			{
				
				if (totalC <= v)
				{
					if ((f[v-totalC]+a[i][0]*j)>f[v])
						f[v]=f[v-totalC]+a[i][0]*j;					
				}

					else break;
					cost=floor(cost*1.07);
				totalC+=cost;

			}
		}
	}

	cout<<f[m];
	cin>>n;

	return 0;


}