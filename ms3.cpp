#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool go0(char ma[][100],int m,int n)
{
	int i=0;
	int j=0;
	//1代表向右，0代表向下
	 bool dir=false;
	while (1)
	{
		if (i==(n-1)&&(j==(m-1)))
			return true;
		if (dir)
		{
			if ((i!=(n-1)) &&(ma[i+1][j]!='b'))
			{
				i++;
			}
			else dir=false;
		}
		else
		{
			if (j!=(m-1) &&(ma[i][j+1]!='b'))
			{
				j++;
			}
			else dir=true;
		}



		if (i==(n-1))
		{
			if (ma[i][j+1]=='b')
				return false;

		}
		else if (j==(m-1))
		{
			if(ma[i+1][j]=='b')
				return false;

		}
		else if ((ma[i+1][j]=='b') &&(ma[i][j+1]=='b'))
			return false;

	}
}

struct blockB
{
	int x;
	int y;
	
};
int main()
{
	int n,m;
	cin>>n>>m;
	char maze[100][100];
	vector<blockB> bS;
	for (int i=0;i<n;i++)
		for (int j=0;j<m;j++)
		{
			cin>>maze[i][j];
			if (maze[i][j]=='b')
			{
				blockB bl;
				bl.x=i;
				bl.y=j;
				bS.push_back(bl);
			}
		}

		if (go0(maze,n,m))
		{
			cout<<0;
			return 0;
		
			
		}

	for (int k=0;k<bS.size();k++)
	{
		char temp[100][100];
		for (int i=0;i<n;i++)
			for (int j=0;j<m;j++)
				temp[i][j]=maze[i][j];
		temp[bS[k].x][bS[k].y]='.';
			if (go0(temp,n,m))
			{
				cout<<1;
				return 0;
			
			}
	}
cout<<2;
return 0;
}