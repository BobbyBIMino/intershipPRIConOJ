#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

bool isIPAdressValid(const char * pszIPAddr)
{
    string s(pszIPAddr);
    //处理开头是空格的情况
    while (s[0]==' ')
    {
    	s=s.substr(1);
    }
    //处理结尾是空格的情况
    while (s[s.length()-1]==' ')
    {
    	s=s.substr(0,s.length()-1);
    }

    string sub;
    int pos1=s.find('.',0);
    sub=s.substr(0,pos1);
    
    int pos2;
	for (int i=0;i<4;i++)
	{

		if (sub.length()>3||sub.length()<1)
		{
			return false;
		}
		else 
		{
			int space=sub.find(' ',0);
			if ((space>=0)&&(space<=sub.length()))
			{
				return false;
			}

			if (sub[0]=='0'&&sub.length()!=1)
			{
				return false;
			}

		}

		//new substr
		pos2=pos1;
		pos1=s.find('.',pos2+1);
		if((pos1>=0)&&(pos1<=s.length()))
		{
			sub=s.substr(pos2+1,pos1-pos2-1);
		}
		else
		{
			sub=s.substr(pos2+1);
		}
					
	}
	return true;
}

int main()
{
	cout<<isIPAdressValid(" 00.123.254.253 ");
	int n;
	cin>>n;

}