/*小Ho根据最近在密码学课上学习到的知识，开发出了一款hiho密码，这款密码的秘钥是这样生成的：对于一种有N个字母的语言，选择一个长度为M的单词；将组成这个单词的所有字母按照顺序不重复的写出（即遇到相同字母时跳过）；然后将字母表剩下的没有使用过的字母按照顺序在其后进行排列。

如对于有5个字母的hiho语，选择单词1, 2, 2, 4, 3（此处数字表示字母在字母表中的顺序），则秘钥为1,2,4,3,5。

但是有一天小Ho在计算出了秘钥之后，却发现他弄丢了一开始选择的单词，于是他找到了你，希望你能够帮他找到能够生成这个秘钥的最短的单词。
*/

#include <iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int *array=new int[n];

	for (int i=0;i<n;i++)
	{
		cin>>array[i];
	}

int i;
for ( i=n-2;i>=0;i--)
{
	if (array[i]>array[i+1])
		break;
}

if (i==-1)
{

	cout<<array[0];
}
else
{
	
		for (int j=0;j<=i;j++)
	{
		cout<<array[j]<<" ";
	}
}






	delete [] array;
	cin>>n;
	return 0;
}