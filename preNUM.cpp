/*将一个字符中所有出现的数字前后加上符号“*”，其他字符保持不变*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;

	while(cin>>str)
	{
		string temp=str;
		int count=0;
		
		for (int i=0;i<temp.size();i++)
		{
			if( str[i+count]>='0' && str[i+count]<='9')
				{
					if(!( str[i+count-1]>='0' && str[i+count-1]<='9'))
					{
						str.insert(str.begin()+i+count,'*');
						count++;
					}
					if(!( str[i+count+1]>='0' && str[i+count+1]<='9'))
					{
						str.insert(str.begin()+i+count+1,'*');
						count++;
					}
					

				}
		}

		if((str[str.size()+count]>= '0') &&(str[str.size()+count]<='9'))
			str.insert(str.end(),'*');
		cout<<str<<endl;


	}
	return 0;

}