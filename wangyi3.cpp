#include <iostream>
using namespace std;

int main()
    {
   int n,m,k;
   int x,y;
   int maxx,maxy;
  int max2=0;
   maxx=0;maxy=0;
    cin>>n>>m>>k;
    int max=0;
    int temp=0;
    int boom[22][22];
    for (int i=0;i<22;i++)
    	for(int j=0;j<22;j++)
    		boom[i][j]=0;
    while (k--)
        {
        cin>>x>>y;
        boom[x][y]++;
    }

    for (int i=1;i<=20;i++)
    	for (int j=1;j<=20;j++)
    	{
    temp=boom[i-1][j-1]+boom[i-1][j]+boom[i-1][j+1]
		+boom[i][j-1]+boom[i][j]+boom[i][j+1]
		+boom[i+1][j-1]+boom[i+1][j]+boom[i+1][j+1];
		if (temp>max)
		{
			max=temp;
			maxx=i;
			maxy=j;
		}
	}

		if (boom[maxx-1][maxy-1] >0)boom[maxx-1][maxy-1]--;
		 if (boom[maxx-1][maxy]>0)boom[maxx-1][maxy]--;
		 if (boom[maxx-1][maxy+1]>0)boom[maxx-1][maxy+1]--;
		 if (boom[maxx][maxy-1]>0)boom[maxx][maxy-1]--;
		if (boom[maxx][maxy]>0)boom[maxx][maxy]--;
		if (boom[maxx][maxy+1]>0)boom[maxx][maxy+1]--;
		if (boom[maxx+1][maxy-1]>0)boom[maxx+1][maxy-1]--;
		if (boom[maxx+1][maxy]>0)boom[maxx+1][maxy]--;
		if (boom[maxx+1][maxy+1]>0)boom[maxx+1][maxy+1]--;

		    for (int i=1;i<=20;i++)
    	for (int j=1;j<=20;j++)
    	{
    temp=boom[i-1][j-1]+boom[i-1][j]+boom[i-1][j+1]
		+boom[i][j-1]+boom[i][j]+boom[i][j+1]
		+boom[i+1][j-1]+boom[i+1][j]+boom[i+1][j+1];
		if (temp>max2)
		{
			max2=temp;
			
		}
	}		
cout<<max+max2;
}