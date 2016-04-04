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
#include <stack>

using namespace std;

int main()
{
	int n;
	cin>>n;

	string [] funcN=new string[n];
	string [] times=new string[n];
	string [] action=new string[n];
	for (int i=0;i<n;i++)
	cin>>funcN[i]>>times[i]>>action[i];
    for (int i=0;i<n;i++)
    {
    	int hh,mm,ss;
    	
    }


	delete[]funcN;
	delete[]times;
	delete[]action;

}