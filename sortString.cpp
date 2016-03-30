/*编写一个程序，将输入字符串中的字符按如下规则排序。

规则1：英文字母从A到Z排列，不区分大小写。

      如，输入：Type 输出：epTy

规则2：同一个英文字母的大小写同时存在时，按照输入顺序排列。

    如，输入：BabA 输出：aABb

规则3：非英文字母的其它字符保持原来的位置。

    如，输入：By?e 输出：Be?y

样例：

    输入：

   A Famous Saying: Much Ado About Nothing(2012/8).

    输出：

   A aaAAbc dFgghh: iimM nNn oooos Sttuuuy (2012/8).
*/


#include <iostream>
#include <string>

   using namespace std;

   int main()
   {
   	string str;

   	while(getline(cin,str))
   	{
   		string temp=str;
   		int pos1;
   		int pos2;
   		for (int i=0;i<str.size();i++)
   		{

   			if (((str[i]>='a')&&(str[i]<='z'))||((str[i]>='A')&&(str[i]<='Z')))
   			{
   				if ((str[i]>='a')&&(str[i]<='z'))
   					pos1=str[i]-'a';
   				else 
   					pos1=str[i]-'A';
   				for(int j=0;j<i;j++)
   				{
   					if (((str[j]>='a')&&(str[j]<='z'))||((str[j]>='A')&&(str[j]<='Z')))
   					{
	    				if ((str[j]>='a')&&(str[j]<='z'))
	   					pos2=str[j]-'a';
	   				else 
	   					pos2=str[j]-'A';  

	   					if (pos1<pos2)
	   					{
	   						char temp;
	   						temp=str[i];
	   						str[i]=str[j];
	   						str[j]=temp;
	   					}						
   					}

   				}   				
   			}



   		}
   		cout<<str<<endl;
   	}
   	return 0;
   }