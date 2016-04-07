#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <cstdlib>
using namespace std;

string ipTobin(string str)
{
	string temp;
	string ans;
	int index=str.find('.');
	while (index!=-1)
	{
		int de=128;
		temp=str.substr(0,index);
		int tmp=atoi(temp.c_str());
		while(de !=0)
		{
		if (tmp/de)
		{
			ans+="1";
			tmp=tmp-de;
		}
		else ans+="0";
		de=de/2;

		}
		str=str.substr(index+1);
		index=str.find('.');
			}
		int de=128;
		temp=str;
		int tmp=atoi(temp.c_str());
		while(de !=0)
		{
		if (tmp/de)
		{
			ans+="1";
			tmp-=de;
		}
		else ans+="0";
		de=de/2;
		}
		return ans;
}

struct IpList
{
	string begin;
	int num;
	bool ok;
};
int main()
{
	int n,m;
	cin>>n>>m;
	vector<IpList> ipList;
	for (int i=0;i<n;i++)
	{
		string strr;
		cin>>strr;

		if (strr =="allow")
		{
			string str;
			cin>>str;
			IpList ip;
			int index=str.find('/');
			if (index!=-1)
			{
				ip.begin=ipTobin(str.substr(0,index));
				ip.num=atoi(str.substr(index+1).c_str());

			}
			else {
				ip.begin=ipTobin(str);
				ip.num=32;
			}
			ip.ok=true;
			ipList.push_back(ip);
		}
		else {
			string str;
			cin>>str;
			IpList ip;
			int index=str.find('/');
			if (index!=-1)
			{
				ip.begin=ipTobin(str.substr(0,index));
				ip.num=atoi(str.substr(index+1).c_str());

			}
			else {
				ip.begin=ipTobin(str);
				ip.num=32;
			}
			ip.ok=false;
			ipList.push_back(ip);
		}


	}

	for (int i=0;i<m;i++)
	{
		string str;
		cin>>str;
		string bin=ipTobin(str);
		bool flag=true;
		for (int i=0;i<ipList.size();i++)
		{
			if (ipList[i].ok)
			{
				if (bin.substr(0,ipList[i].num)==ipList[i].begin.substr(0,ipList[i].num))
				{
					break;
				}


			}
			else 
			{
				int j=0;
				
				if (bin.substr(0,ipList[i].num)==ipList[i].begin.substr(0,ipList[i].num))
				{
					cout<<"NO"<<endl;
					flag=false;
					break;
				}
			}
		}
		if (flag)
			cout<<"YES"<<endl;
	}

	return 0;
}