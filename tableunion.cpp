#include <iostream>
#include <vector>
using namespace std;

struct node{
int value;
int index;
};
int main()
{
	vector<node> table;
	int n,a,b;
	cin>>n;
	bool flag;
	while (n--)
	{
		cin>>a>>b;
		flag=false;
		if (table.size()>0)
		{
			for (int i=0;i<table.size();i++)
			{
				if (a==table[i].index)
				{
					table[i].value+=b;
					flag=true;
					break;
				}
			}
		}
		if (!flag)
		{
			bool gl=false;
			node no;
			no.value=b;
			no.index=a;
			if (table.size()>0)
			{
				for (int i=0;i<table.size();i++)
				{
					if(a<table[i].index)
					{
						gl=true;
						table.insert(table.begin()+i,no);
						break;
					}
				}
			}
			if (!gl)
				table.push_back(no);
		}
	}
	for(int i=0;i<table.size();i++)
	{
		cout<<table[i].index<<" "<<table[i].value<<endl;
	}
	cin>>n;
}