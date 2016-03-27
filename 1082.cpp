
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	bool flag;
	char tStr[]="fjxmlhx";
	char up[]="MARSHTOMP";
	char low[]="marshtomp";
	int pos=0;
	while(getline(cin,str))
	{
		pos=0;
		while(1)
		{
			if ((str.find('a',pos))!=(-1))
			{
				pos=str.find('a',pos)+1;
			}
			else if((str.find('A',pos))!=(-1))
				{
					pos=str.find('A',pos)+1;
				}
			else break;
			flag=true;
				for (int i=0;i<9;i++)
				{

					if((str[pos+i-2]!=up[i])&&(str[pos+i-2]!=low[i]))
					{
						flag=false;
					}

				}
				if (flag)
					str.replace(pos-2,9,tStr);
		}
		cout<<str<<endl;

	}


}