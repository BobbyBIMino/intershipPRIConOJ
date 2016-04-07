#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	string str;

	while(getline(cin,str))
	{
		string ans;
		bool a[128]={0};
		for (int i=0;i<str.size();i++)
			if (!a[str[i]])
			{
				a[str[i]]=1;
				ans+=str[i];
			} 
			cout<<ans<<endl;
	}


	return 0;
}