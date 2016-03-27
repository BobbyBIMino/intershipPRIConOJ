#include <iostream>
#include <cstring>
using namespace std;


int GetResult(const char * input,char *output)
{
	string s(input);
	string out="";
	
	while (s.length()!=0)
	{
		char first=s.at(0);
		
		int beg=0;
		out.append(1,first);
		while (find(first,0)>0)
		{
			beg=find(first,0);
			cout<<beg<<endl;
			s=s.erase(beg,1);
			
		}

	}
	cout<<out<<endl;
}

int main()
{
	char* input ="dskjvbsdb";
	char* output=new char[100];
	GetResult(input,output);


	cin>>output;
}

