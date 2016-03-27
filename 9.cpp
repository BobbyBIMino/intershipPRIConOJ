#include <iostream>
#include <string>
using namespace std;
/*
思路：
0.出去开始年份与结束年份的闰月数(计算不包括开始、结束年份的离开始/结束年份最近的闰年年份)
1.开始的年份是闰年
起始日期是不是小于等于2.29 是：+1
2.结束的年份是闰年
结束日期和是不是大于等于2.29 是：+1
3.开始年份和结束年份是同一年，不加


*/
//输入年份，判断是不是闰年
bool isR(int n)
{
	if (((n%4==0)&&(n%100!=0))||(n%400==0))
	{
		return true;
	}
	else return false;
}

int main()
{
   string months[]={"January","February","March","April","May","June","July","August","September","October","November","December"};
   string sMon,eMon;
   string sDay,eDay;
   double sYear,eYear;
   int n;
   int num;
   cin>>n;
   
   	for (int i=1;i<=n;i++)
   	{
   		cin>>sMon>>sDay>>sYear;
   		cin>>eMon>>eDay>>eYear;
   		//开始年份是闰年
   		num=0;
   		if (isR(sYear)){
	   		for (int i=0;i<12;i++)
	   		{
	   			if (sMon==months[i])
	   			{
	   				if (i<=1)
	   					num++;
	   				break;	   				
	   			}
	   		}
   		}
   		if (isR(eYear))
   		{
	   		for (int i=0;i<12;i++)
	   		{  			
	   			if (eMon==months[i])
	   			{
	   			    if ((i>1)||((i==1)&&(eDay[0]=='2')&&(eDay[1]=='9')))//需要加1
	   			    	{
	   			    		if(sYear!=eYear)
	   			    		num++;
	   			    	}
	   			    	else {
	   			    		if(sYear==eYear)
	   			    			num--;
	   			    	}
	   				break;
	   			}	
	   		}  			
   		}

   		sYear++;
   		eYear--;
   		if (eYear>=sYear)
   		{
   		num+=(eYear/4 - eYear/100+eYear/400)-(sYear/4- sYear/100+sYear/400);

   		}
        cout<<"Case #"<<i<<": "<<num<<endl;
   		
   	}
}