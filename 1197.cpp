/*

描述

To prepare for the English exam Little Ho collected many digital reading materials. Unfortunately the materials are messed up by a malware. 

It is known that the original text contains only English letters (a-zA-Z), spaces, commas, periods and newlines, conforming to the following format:

1. Each sentence contains at least one word, begins with a letter and ends with a period. 

2. In a sentence the only capitalized letter is the first letter.

3. In a sentence the words are separated by a single space or a comma and a space. 

4. The sentences are separated by a single space or a single newline.

It is also known the malware changes the text in the following ways:

1. Changing the cases of letters.

2. Adding spaces between words and punctuations.

Given the messed text, can you help Little Ho restore the original text?

输入

A string containing no more than 8192 English letters (a-zA-Z), spaces, commas, periods and newlines which is the messed text.

输出

The original text.

样例输入

my Name  is Little   Hi.
His   name IS Little ho  ,  We are   friends.

样例输出

My name is little hi.
His name is little ho, we are friends.

*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	string sentence;
	int pos1,pos2;
	while(getline(cin,str))
	{
		int space;
		pos1=0;
		pos2=str.find('.',pos1);
		while(pos2!=-1)
		{
			sentence=str.substr(pos1,pos2-pos1+1);
			int jsy=0;

			while (sentence[jsy]==' ')
			{
				jsy++;
			}
			if ((sentence[jsy]>='a')&&(sentence[jsy]<='z'))
			{
				sentence[jsy]-='a'-'A';
			}
			cout<<sentence[jsy];
			jsy++;
			for (int i=jsy;i<sentence.length();i++)
			{
				if (sentence[i]==' ')
				{	
					space++;

				}
				else 
				{
					if((sentence[i]>='A')&&(sentence[i]<='Z'))
					sentence[i]+='a'-'A';	
					if (((space!=0)&&(sentence[i]!=',')&&((sentence[i]!='.')))||(sentence[i-1]==','))
					{
						cout<<" ";
					}	
					cout<<sentence[i];
					space=0;	
				}
			}
		pos1=pos2+1;
		pos2=str.find('.',pos2+1);
		if (pos2!=-1)
		{
			cout<<" ";
		}
		

		}			
	cout<<endl;	
	}
	return 0;
}