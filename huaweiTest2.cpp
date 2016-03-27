#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
	int n;
	string str1,str2;
	long num1,num2;
	num1=0;num2=0;
	cin>>n;
	if(!((n<=35)&&(n>=2)))
	{
		cout<<-1;
		return 0;
	}
	cin>>str1>>str2;

	for (int i=str1.size()-1;i>=0;i--)
	{
		if ((str1[i]>='0')&&(str1[i]<='9'))
		{
			if ((str1[i]-'0')<n)
			{
				num1=(str1[i]-'0')*(pow(n,str1.size()-1-i))+num1;
			}
			else 
			{
				cout<<-1;
				return 0;
			}

		} else if((str1[i]>='a')&&(str1[i]<='z'))
		{
			if ((str1[i]-'a'+10)<n)
			{
				num1=(str1[i]-'a'+10)*pow(n,str1.size()-1-i)+num1;
			}
			else 
			{
				cout<<-1;
				return 0;
			}
		}
		else 
		{
			cout<<-1;
			return 0;
		}
	}
	for (int i=str2.size()-1;i>=0;i--)
	{
		if ((str2[i]>='0')&&(str2[i]<='9'))
		{
			if ((str2[i]-'0')<n)
			{
				num2=(str2[i]-'0')*pow(n,str2.size()-1-i)+num2;
			}
			else 
			{
				cout<<-1;
				return 0;
			}

		} else if((str2[i]>='a')&&(str2[i]<='z'))
		{
			if ((str2[i]-'a'+10)<n)
			{
				num2=((str2[i]-'a')+10)*pow(n,str2.size()-1-i)+num2;
			}
			else 
			{
				cout<<-1;
				return 0;
			}
		}
		else 
		{
			cout<<-1;
			return 0;
		}
	}
	cout<<num1+num2;
	cin>>n;
}