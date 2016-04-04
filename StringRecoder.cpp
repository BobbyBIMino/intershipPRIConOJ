/*For this question, your program is required to process an input string containing only ASCII characters between ‘0’ and ‘9’, or between ‘a’ and ‘z’ (including ‘0’, ‘9’, ‘a’, ‘z’). 

Your program should reorder and split all input string characters into multiple segments, and output all segments as one concatenated string. The following requirements should also be met,
1. Characters in each segment should be in strictly increasing order. For ordering, ‘9’ is larger than ‘0’, ‘a’ is larger than ‘9’, and ‘z’ is larger than ‘a’ (basically following ASCII character order).
2. Characters in the second segment must be the same as or a subset of the first segment; and every following segment must be the same as or a subset of its previous segment. 

Your program should output string “<invalid input string>” when the input contains any invalid characters (i.e., outside the '0'-'9' and 'a'-'z' range).*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
string str;
string output;

  while (getline(cin,str))
  {
  	bool invalid=false;
  	int countN[10]={0};
  	int countE[26]={0};
  	for (int i=0;i<str.size();i++)
  	{
  		if((str[i] >='a')&&(str[i]<='z'))
  			countE[str[i]-'a']++;
  		else if ((str[i] >='0')&&(str[i]<='z'))\
  			countN[str[i]-'0']++;
  		else 
  		{
  			cout<<"<invalid input string>";
  			invalid=true;
   		}
  	}

  	while(!invalid)
  	{
  		bool fg1=false;
  		bool fg2=false;
  		for (int i=0;i<10;i++)
  		{
  			if (countN[i])
  			{
  				cout<<char(i+'0');
  				countN[i]--;
  				fg1=true;
  			}
  		}
  		for (int j=0;j<26;j++)
  		{
  			if (countE[j])
  			{
  				cout<<char(j+'a');
  				countE[j]--;
  				fg2=true;
  			}
  		}

  		if ((!fg1)&&(!fg2))
  			break;
  	}
  	cout<<endl;


  	
  }
  return 0;
}