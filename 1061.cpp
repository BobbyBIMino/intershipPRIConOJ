/*We say a string is beautiful if it has the equal amount of 3 or more continuous letters (in increasing order.) 

Here are some example of valid beautiful strings: "abc", "cde", "aabbcc", "aaabbbccc".

Here are some example of invalid beautiful strings: "abd", "cba", "aabbc", "zab".

Given a string of alphabets containing only lowercase alphabets (a-z), output "YES" if the string contains a beautiful sub-string, otherwise output "NO".
*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	int nn;

	cin>>nn;
	for (int i=0;i<nn;i++)
	{
	vector<char> c;
	vector<int> n;
		long m;
		cin>>m;
		string str;
		cin>>str;
		bool flag=false;
		c.push_back(str[0]);
		n.push_back(1);
		for (int i=1;i<str.size();i++)
		{
			if (str[i]!=str[i-1])
			{
				c.push_back(str[i]);
				n.push_back(1);
			}
			else
			{
				n[n.size()-1]++;
			}


		}
		if (c.size()<=2)
		{
			flag=false;
			cout<<"NO"<<endl;
			continue;
		}


		for (int i=0;i<c.size()-2;i++)
			if ((c[i]+1 ==c[i+1])&&(c[i+1]+1 == c[i+2])&&(n[i]>=n[i+1])&&(n[i+1]<=n[i+2]))
			{

				cout<<"YES"<<endl;
				flag=true;
				break;
			}

			if (!flag)
				cout<<"NO"<<endl;

		
	}
cin>>nn;
return 0;
}