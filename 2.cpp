#include <iostream>
#include <cstring>
using namespace std;
/*
思路：
1.求字符串长度的因子
2.一个个尝试，如果2是最小周期，那么4就不是，以此类推
*/

int GetMinPeriod(char* inputstring)
{
	string str(inputstring);
	string firstI;
	string follewI;
	int length=str.length();
	for (int i=1;i<=length;i++)
	{
		firstI=str.substr(0,i);
		if ((length%i)==0)
		{
			for (int j=0;j<length/i;j++)
			{
				follewI=str.substr(i*j,i);
				if (firstI!=follewI)
				{
					j=length/i;
				}
				if ((firstI==follewI)&&(j==(length/i-1)))
				{
					return i;
				}


			}
		}
	}

}

int main()
{
	char* inputstring="asdfghjaxdfghj";
	cout<<GetMinPeriod(inputstring);
	int n;

	cin>>n;
     
}