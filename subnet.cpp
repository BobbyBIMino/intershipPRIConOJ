/*题目描述


子网掩码是用来判断任意两台计算机的IP地址是否属于同一子网络的根据。
子网掩码与IP地址结构相同，是32位二进制数，其中网络号部分全为“1”和主机号部分全为“0”。利用子网掩码可以判断两台主机是否中同一子网中。若两台主机的IP地址分别与它们的子网掩码相“与”后的结果相同，则说明这两台主机在同一子网中。

示例：
I P 地址　 192.168.0.1
子网掩码　 255.255.255.0

转化为二进制进行运算：

I P 地址　11010000.10101000.00000000.00000001
子网掩码　11111111.11111111.11111111.00000000

AND运算
 　　　　11000000.10101000.00000000.00000000

转化为十进制后为：
 　　　　192.168.0.0

 

I P 地址　 192.168.0.254
子网掩码　 255.255.255.0


转化为二进制进行运算：

I P 地址　11010000.10101000.00000000.11111110
子网掩码　11111111.11111111.11111111.00000000

AND运算
　　　　　11000000.10101000.00000000.00000000

转化为十进制后为：
　　　　　192.168.0.0

通过以上对两台计算机IP地址与子网掩码的AND运算后，我们可以看到它运算结果是一样的。均为192.168.0.0，所以这二台计算机可视为是同一子网络。
*/

#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
	string subnet,ip1,ip2;
	while(cin>>subnet>>ip1>>ip2)
	{
		bool flag=true;
		bool flag2=false;
		int index0,index1,index2;
		string temp0,temp1,temp2;
		int tmp0,tmp1,tmp2;
		for (int i=0;i<3;i++)
		{
			index0=subnet.find('.');
			index1=ip1.find('.');
			index2=ip2.find('.');	

			temp0=subnet.substr(0,index0);
			temp1=ip1.substr(0,index1);	
			temp2=ip2.substr(0,index2);	

			tmp0=atoi(temp0.c_str());
			tmp1=atoi(temp1.c_str());
			tmp2=atoi(temp2.c_str());	
	

			subnet=subnet.substr(index0+1);
			ip1=ip1.substr(index1+1);
			ip2=ip2.substr(index2+1);	
			if ((tmp0<256)&&(tmp1<256)&&(tmp2<256))
			{
				if ((tmp0&tmp1)!=(tmp0&tmp2))	

				{	
					flag=false;
				}	
	

			}
			else 
			{
				flag2=true;
			}

		}

			tmp0=atoi(subnet.c_str());
			tmp1=atoi(ip1.c_str());
			tmp2=atoi(ip2.c_str());	
		if ((tmp0<256)&&(tmp1<256)&&(tmp2<256))
			{
				if ((tmp0&tmp1)!=(tmp0&tmp2))	

				{	
					flag=false;
				}	
	

			}
			else 
			{
				flag2=true;
				
			}		
        
        if(!flag2)
        {
        	if (flag)
        		cout<<2<<endl;
        	else cout<<0<<endl;
        }
        else cout<<1<<endl;








	}
	return 0;

}