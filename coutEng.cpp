/*输入一行字符，分别统计出包含英文字母、空格、数字和其它字符的个数*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	while(getline(cin,str))
	{
		int eng,num,other,space;
		eng=0;
		num=0;
		other=0;
		space=0;
		for (int i=0;i<str.size();i++)
		{
			if (((str[i]>='a')&&(str[i]<='z'))||((str[i]>='A')&&(str[i]<='Z')))
				eng++;
			else if ((str[i]>='0')&&(str[i]<='9'))
				num++;
			else if(str[i]==' ')
				space++;
			else other++;

		}
		cout<<eng<<endl;
		cout<<space<<endl;
		cout<<num<<endl;
		cout<<other<<endl;

	}
	return 0;
}