/*在计算机中，由于处理器位宽限制，只能处理有限精度的十进制整数加减法，比如在32位宽处理器计算机中，
参与运算的操作数和结果必须在-231~231-1之间。如果需要进行更大范围的十进制整数加法，需要使用特殊
的方式实现，比如使用字符串保存操作数和结果，采取逐位运算的方式。如下：
9876543210 + 1234567890 = ?
让字符串 num1="9876543210"，字符串 num2="1234567890"，结果保存在字符串 result = "11111111100"。
-9876543210 + (-1234567890) = ?
让字符串 num1="-9876543210"，字符串 num2="-1234567890"，结果保存在字符串 result = "-11111111100"。
要求编程实现上述高精度的十进制加法。
要求实现方法： 
public String add (String num1, String num2)
【输入】num1：字符串形式操作数1，如果操作数为负，则num1的前缀为符号位'-'
num2：字符串形式操作数2，如果操作数为负，则num2的前缀为符号位'-'
【返回】保存加法计算结果字符串，如果结果为负，则字符串的前缀为'-'
注：
(1)当输入为正数时，'+'不会出现在输入字符串中；当输入为负数时，'-'会出现在输入字符串中，且一定在输入字符串最左边位置；
(2)输入字符串所有位均代表有效数字，即不存在由'0'开始的输入字符串，比如"0012", "-0012"不会出现；
(3)要求输出字符串所有位均为有效数字，结果为正或0时'+'不出现在输出字符串，结果为负时输出字符串最左边位置为'-'。
*/

#include <iostream>
#include <string>

using namespace std;

string ADD(string str1,string str2)
{
	int c;
	int size=str1.size();
	string ans="";
	if (str2.size()>str1.size())
	{	
		size=str2.size();
		int temp=str1.size();
		for (int i=0;i<(size-temp);i++)
		{
			str1.insert(str1.begin(),'0');
		}
	}
	else 
	{
		int temp=str2.size();
	for (int i=0;i<(size-temp);i++)
		{
			str2.insert(str2.begin(),'0');
			
		}

	}
	c=0;
	for (int i=size-1;i>=0;i--)
	{
		int an=str1[i]-'0'+str2[i]-'0'+c;
		if (an>=10)
		{
			an=an-10;
			c=1;
		}
		else c=0;
		ans.insert(ans.begin(),an+'0');
	}
	if (c==1)
		ans.insert(ans.begin(),'1');
	return ans;

}

string SUB(string str1,string str2)
{
	int c;
	int size=str1.size();
	bool minus=false;
	string ans="";
	if (str2.size()>str1.size())
	{	
		minus=true;
		string temp=str1;
		str1=str2;
		str2=temp;
		size=str1.size();
	}
	int temp=str2.size();
	for (int i=0;i<size-temp;i++)
	{
		str2.insert(str2.begin(),'0');
	}
	
	c=0;
	
	for (int i=size-1;i>0;i--)
	{
		int an=str1[i]-'0'-(str2[i]-'0')+c;
		
		if (an<0)
		{
			an=an+10;
			c=-1;
		}
		else c=0;
		ans.insert(ans.begin(),an+'0');
	}
	if ((str1[0]-str2[0]+c)<0)
	{
		ans.insert(ans.begin(),-(str1[0]-str2[0]+c)+'0');
		c=-1;
	}
	else
	{
			int an=str1[0]-'0'-(str2[0]-'0')+c;
		ans.insert(ans.begin(),an+'0');
		c=0;

	}
	
	if (c==-1 || minus)
		ans.insert(ans.begin(),'-');
	return ans;

}

int main()
{
	string str1,str2;
	while (cin>>str1>>str2)
	{
		if ((str1[0]!='-')&&(str2[0]=='-'))
			cout<<SUB(str1,str2.substr(1))<<endl;
		else if ((str1[0]=='-')&&(str2[0]!='-'))
			cout<<SUB(str2,str1.substr(1))<<endl;
		else if ((str1[0] == '-')&&(str2[0] == '-'))
			cout<<"-"<<ADD(str1.substr(1),str2.substr(1))<<endl;
		else cout<<ADD(str1,str2)<<endl;

	}
	return 0;
}