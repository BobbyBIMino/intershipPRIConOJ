#include <iostream>
using namespace std;

int main()
{
	int n;
	double num;
	double pos;
    cin>>n;

	for (int i=0;i<n;i++)
	{

		cin>>num;
		pos=0.0;
		int count1=0;

		while (1)
		{
			if (pos==num)
			{
				cout<<"-1"<<endl;
				break;
			}
			else if (num<pos)
			{
				cout<<count1*4<<endl;
				break;
			}
			pos+=(0.5-pos)/2;
			count1++;
		}
	}
	return 0;
}