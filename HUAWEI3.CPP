#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

bool check(int T[],int W[],int D[] )
{
	int tempT[10],tempW[10],tempD[10];
	bool dui=false;
	bool hu=false;
	for (int i=1;i<10;i++)
	{
		tempT[i]=T[i];
		tempW[I]=W[i];
		tempD[i]=D[i];

	}
	for (int i=1;i<10;i++)
	{
		if (tempT[i] ==4)
		{
			tempT[i]
			check()
		}
		if((tempT[i] ==1))
		{
			if ((i+2)<=9)
				if ((tempT[i+1]>0)&&(tempT[i+2]>0)
				{
					tempT[i]--;
					tempT[i+1]--;
					tempT[i+2]--;
				}
				else return false;
		}
			else if (tempT[i]==2)
			{
				dui=true;
				tempT[i]=temp[i]-2;
			}
				else if (tempT[i]==3)
				{
					tempT[i]==
				}


	}
	for (int i=1;i<10;i++)
	{
		
	}
	for (int i=1;i<10;i++)
	{
		
	}
	return hu;

}

int main()
{
	int T[10]={0};
	int W[10]={0};
	int D[10]={0};
	string str;
	cin>>str;
	for (int i=0;i<str.size()-1;i+=2)
	{
		int temp;
		temp=str[i]-'1'+1;
			if (str[i+1]=='T')
					T[temp]++;
				else if (str[i+1]=='W')
					W[temp]++;
				else if (str[i+1]=='D')
					D[temp]++;
		
		
		
	}

	for (int i=1;i<10;i++)
	{
		if(T[i]<4)
		{
			T[i]++;
			if (check(T,W,D))
				cout<<i<<"T";
			T[i]--;
		}
	}
	for (int i=1;i<10;i++)
	{
		if(D[i]<4)
		{
			D[i]++;
			if (check(T,W,D))
				cout<<i<<"W";
			D[i]--;
		}
	}
	for (int i=1;i<10;i++)
	{
		if(W[i]<4)
		{
			W[i]++;
			if (check(T,W,D))
				cout<<i<<"W";
			W[i]--;
		}
	}

cin>>str;
}