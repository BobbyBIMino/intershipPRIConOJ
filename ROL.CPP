#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	string str;
	cin>>str>>n;
	while (n>str.length())
	{
		n=n-str.length();
	}
        if(n>0)
            {
        string sub1=str.substr(0,n);
        string sub2=str.substr(n,str.length()-n);
        
        cout<<sub2+sub1;
         
        }
        else cout<<str;
        cin>>n;
}