/*
Little Hi gets lost in the city. He does not know where he is. He does not know which direction is north.

Fortunately, Little Hi has a map of the city. The map can be considered as a grid of N*M blocks. Each block is numbered by a pair of integers. The block at the north-west corner is (1, 1) and the one at the south-east corner is (N, M). Each block is represented by a character, describing the construction on that block: '.' for empty area, 'P' for parks, 'H' for houses, 'S' for streets, 'M' for malls, 'G' for government buildings, 'T' for trees and etc.

Given the blocks of 3*3 area that surrounding Little Hi(Little Hi is at the middle block of the 3*3 area), please find out the position of him. Note that Little Hi is disoriented, the upper side of the surrounding area may be actually north side, south side, east side or west side.

*/
#include <iostream>
using namespace std;

int rotate(char place[][3])
{
	char pp[3][3];

	for (int i=0;i<3;i++)
		for (int j=0;j<3;j++)
			pp[i][j]=place[2-j][i];
	for (int i=0;i<3;i++)
		for (int j=0;j<3;j++)
			place[i][j]=pp[i][j];
		return 0;
}

int main()
{
	int n,m;
	cin>>n>>m;
	char map[205][205];
	char place[3][3];
	for (int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			cin>>map[i][j];
	for (int i=0;i<3;i++)
		for (int j=0;j<3;j++)
			cin>>place[i][j];

	for (int i=0;i<n-2;i++)
	{
		for (int j=0;j<m-2;j++)
		{
			bool flag=false;
			for (int k=0;k<4;k++)
			{
		if ((place[0][0]==map[i][j])&&(place[0][1]==map[i][j+1])&&(place[0][2]==map[i][j+2])&&(place[1][0]==map[i+1][j])&&(place[1][1]==map[i+1][j+1])&&(place[1][2]==map[i+1][j+2])&&(place[2][0]==map[i+2][j])&&(place[2][1]==map[i+2][j+1])&&(place[2][2]==map[i+2][j+2]))
			{
				flag=true;
				break;
			}
			rotate(place);
			}
			if (flag)
				cout<<i+2<<" "<<j+2<<endl;
				
}
	}
	return 0;

}