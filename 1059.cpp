/*
We define the matching contents in the strings of strA and strB as common substrings of the two strings. There are two additional restrictions on the common substrings.

The first restriction here is that every common substring's length should not be less than 3.  For example:

strA: abcdefghijklmn
strB: ababceghjklmn

The matching contents in strA and strB are substrings ("abc", "jklmn"). Note that though "e" and "gh" are common substrings of strA and strB, they are not matching content because their lengths are less than 3.

The second restriction is that the start indexes of all common substrings should be monotone increasing. For example:

strA: aaabbbbccc
strB: aaacccbbbb

The matching contents in strA and strB are substrings ("aaa", "bbbb"). Note that though "ccc" is common substring of strA and strB and has length not less than 3, the start indexes of ("aaa", "bbbb", "ccc") in strB are (0, 6, 3), which is not monotone increasing.

*/

#include <iostream>
#include <string>
using namespace std;
 const int size=500;

int main()
{
	
	short dp[size][size]={{0}};
	short f[size][size]={{0}};
	string a;
	string b;
	cin>>a>>b;
	a.insert(a.begin(),'#');
	b.insert(b.begin(),'#');
	for (int i=1;i<a.size();i++)
	{
		for (int j=1;j<b.size();j++)
		{
			if (a[i]==b[j])
				f[i][j]=f[i-1][j-1]+1;
			else f[i][j]=0;

		}
	}
	for (int i=1;i<a.size();i++)
		for (int j=1;j<b.size();j++)
		{
			dp[i][j]=dp[i-1][j];
			if(dp[i][j-1]>dp[i][j])
				dp[i][j]=dp[i][j-1];
			if (f[i][j]>=3)
			{
				for (int k=3;k<=f[i][j];k++)
				{
					if (dp[i-k][j-k]+k > dp[i][j])
						dp[i][j]=dp[i-k][j-k]+k;
				}
			}
		}
		int max=0;
		for (int i=1;i<a.size();i++)
			for (int j=1;j<b.size();j++)
				if (max<dp[i][j])
					max=dp[i][j];
			

		cout<<max;
		int n;
		cin>>n;
	return 0;


}


