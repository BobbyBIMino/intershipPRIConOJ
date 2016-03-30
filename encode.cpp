/*有一种技巧可以对数据进行加密，它使用一个单词作为它的密匙。下面是它的工作原理：首先，选择一个单词作为密匙，如TRAILBLAZERS。如果单词中包含有重复的字母，只保留第1个，其余几个丢弃。现在，修改过的那个单词死于字母表的下面，如下所示：

A B C D E F G H I J K L M N O P Q R S T U V W X Y Z

T R A I L B Z E S C D F G H J K M N O P Q U V W X Y

上面其他用字母表中剩余的字母填充完整。在对信息进行加密时，信息中的每个字母被固定于顶上那行，并用下面那行的对应字母一一取代原文的字母(字母字符的大小写状态应该保留)。因此，使用这个密匙，Attack AT DAWN(黎明时攻击)就会被加密为Tpptad TP ITVH。

请实现下述接口，通过指定的密匙和明文得到密文。
*/

#include <iostream>
#include <string>
using namespace std;
int main()
{
	string key,code;
	char set[26];
	bool show[26]={false};
	while(cin>>key>>code)
	{
		int count=0;
		for (int i=0;i<key.size();i++)
		{
			int index;
			if ((key[i]>='a')&&(key[i]<='z'))
				index=key[i]-'a';
			else index=key[i]-'A';

			if (!show[index])
			{
				show[index]=true;
				set[count]=index+'a';
				count++;
			}
		}
		for (int i=0;i<26;i++)
		{
		    if (!show[i])
			{
				show[i]=true;
				set[count]=i+'a';
				count++;
			}

		}
		for (int i=0;i<code.size();i++)
		{
			if ((code[i]>='a')&&(code[i]<='z'))
			{
				cout<<set[code[i]-'a'];
			}
			else cout<<char(set[code[i]-'A']-'a'+'A');
		}
		cout<<endl;




	}
	return 0;
}