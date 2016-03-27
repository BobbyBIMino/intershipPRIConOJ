#include <iostream>
#include <string>
#include <vector>
 #include <cstdlib>
using namespace std;

int main()
{
	string cmd;
	int count=0;
	vector<int> vip;
	vector<int> other;


		while(	getline(cin,cmd))
		{
			if (cmd == "get")
			{ 
				// cout<<other.size()<<" "<<vip.size()<<endl;

				if ((vip.size()==0)&&(other.size()==0))
				count++;
				else if (((vip.size()!=0)&&(vip[vip.size()-1] == count))||((other.size()!=0)&&(other[other.size()-1] == count)))
					count++;
				cout<<count<<endl;
				other.push_back(count);
			}	
			else if (cmd == "get vip")	
			{
				if ((vip.size()==0)&&(other.size()==0))
				count++;
				else if (((vip.size()!=0)&&(vip[vip.size()-1] == count))||((other.size()!=0)&&(other[other.size()-1] == count)))
					count++;
				cout<<"vip "<<count<<endl;
				vip.push_back(count);
			}	
			else if (cmd == "call" )
				{
					if (vip.size()!=0)
					{
						cout<<"vip "<<vip[0]<<endl;
						vip.erase(vip.begin());
					}
					else if (other.size()!=0)
					{
						cout<<other[0]<<endl;
						other.erase(other.begin());
					}
					else cout<<"error"<<endl;


				}
				else if (cmd.substr(0,6) == "delete")
				{
					string str=cmd.substr(7);
					int num=atoi(str.c_str());
					bool flag=false;
					for (int i=0;i<vip.size();i++)
					{
						if (num == vip[i])
						{
							cout<<vip[i]<<endl;
							vip.erase(vip.begin()+i);

							
							flag=true;
							break;
						}
					}
					for (int i=0;i<other.size();i++)
					{
						if (num == other[i])
						{
							cout<<other[i]<<endl;
							other.erase(other.begin()+i);
							

							flag=true;
							break;
						}
					}
					if (!flag)
					{
						cout<<"error"<<endl;
					}
				}
				else if (cmd == "count")
				{
					cout<<other.size()+vip.size()<<endl;
				}
				else if (cmd.substr(0,6) == "countN")
				{
					string str=cmd.substr(7);
					int num=atoi(str.c_str());
					bool flag=false;
					for(int i=0;i<vip.size();i++)
					{
						if (num==vip[i])
						{
							flag=true;
							cout<<i<<endl;
						}
					}
					if (!flag)
					{
						for(int i=0;i<other.size();i++)
						{
							if (num==other[i])
							{
								flag=true;
								cout<<i+vip.size()<<endl;
							}
						}
					}
					if (!flag)
					cout<<"error"<<endl;

				}
				else if (cmd == "reset")
				{
					count=0;
					other.clear();
					vip.clear();

				}
				else if (cmd == "quit")
				{
					return 0;
				}
				else {
					cout<<"error"<<endl;
				}

		}			
	}