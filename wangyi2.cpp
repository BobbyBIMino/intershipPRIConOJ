#include <iostream>
using namespace std;

int main()
{
	int r;
	int x[4];
	int y[4];
	while(	cin>>r)
	{
	int num=0;
		
			for (int i=1;i<=3;i++)
		cin>>x[i]>>y[i];
	cin>>x[0]>>y[0];
	for (int i=1;i<4;i++)
	{
		if (((x[0]-x[i])*(x[0]-x[i])+(y[0]-y[i])*(y[0]-y[i]))<=r*r)
			num++;
	}
cout<<num<<"x";

	}

return 0;

}