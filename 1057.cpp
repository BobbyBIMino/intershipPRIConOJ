/*You are given a txt file, which is performance logs of a single-threaded program. 

Each line has three columns as follow:

[Function Name] [TimeStamp] [Action]

[FunctionName] is a string of length between 1~255

[TimeStamp] format is hh:mm:ss
Valid values for "Action" column are START or END, marking the start or end of a function call. 
Each function will only be called once.
Output the depth-first traversal result of the call graph with the total time of each function call. However, sometimes the performance log isn't correct and at that time you just need to output "Incorrect performance log".
*/
/*
•记录中的时间不是严格递增的
•一个函数的结束时间比启动时间更早
•记录中一个函数有不对应的启动操作START或结束操作END，比如出现了START却没有对应的END，或出现了END却没有出现START。而函数的START和END应该成对出现
•两个函数出现交叉的情况，而在单线程程序中是不会出现的，比如  A START B START A END B END 
*/

#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <cstdlib>
#include <stack>

using namespace std;

int main()
{
	int n;
	cin>>n;

	bool flag=true;
	vector<int> times;
	vector<string> funcN;
	vector<string> action;
	stack<int> state;
	
	for (int i=0;i<n;i++)
	{
		string str;
		string sun;
		string act;
		cin>>sun>>str>>act;
		int ti;
		ti=60*60*atoi(str.substr(0,2).c_str())+60*atoi(str.substr(3,2).c_str())+atoi(str.substr(6,2).c_str());
		times.push_back(ti);
		funcN.push_back(sun);
		action.push_back(act);
	}
    
    for (int i=1;i<times.size();i++)
    {
    	if (times[i]<times[i-1])
    	{
    		flag=false;
    		break;
    	}
    }
    string rootFun=funcN[0];
    if (flag)
    {
    	for (int i=0;i<n;i++)
    	{
    		if (action[i]=="START")
    		{
    			state.push(i);

    		}
    		else if (action[i]=="END")
    		{
    			
    			if (funcN[state.top()]!=funcN[i])
    			{
    				flag=false;
    				break;
    			}
    			else 
    			{
    				times[state.top()]=times[i]-times[state.top()];
    				if (times[state.top()]==0)
    				{
    					flag=false;
    					break;
    				}
    				state.pop();
    			}
    		}
    		if ((state.size()==0)&&(i != n-1))
    		{
    			flag=false;
    			break;
    		}


    	}
    }


    if (flag&&(state.size()==0))
    {
    	for (int i=0;i<n;i++)
    	{
    		if (action[i]=="START")
    		{
    			cout<<funcN[i]<<" "<<setw(2)<<setfill('0')<<times[i]/3600<<":"<<setw(2)<<setfill('0')<<(times[i]-3600*(times[i]/3600))/60<<":"<<setw(2)<<setfill('0')<<times[i]%60<<endl;
    		}
    	}
    	

    	
    }
    else cout<<"Incorrect performance log";
   cin>>n;
return 0;

}