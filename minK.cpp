/*
输入n个整数，输出其中最小的k个。

详细描述：

接口说明

原型：

bool GetMinK(unsignedint uiInputNum, int * pInputArray, unsignedint uiK, int * pOutputArray);

输入参数：

     unsignedint uiInputNum //输入整数个数

int * pInputArray  //输入整数数组

unsignedint uiK   //需输出uiK个整数
输出参数（指针指向的内存区域保证有效）：
    int * pOutputArray //最小的uiK个整数
返回值
        false 异常失败
          true  输出成功
输入描述:
输入说明 
1 输入两个整数 
2 输入一个整数数组


*/

#include <iostream>
using namespace std;

int main()
{
	int n;
	int k;
    while(cin>>n>>k)
    {
    	int *array=new int[n];
    	for (int i=0;i<n;i++)
    		cin>>array[i];
    	for (int i=0;i<n;i++)
    		for (int j=0;j<i;j++)
    		{
    			if (array[i]<array[j])
    			{
    				int temp=array[i];
    				array[i]=array[j];
    				array[j]=temp;
    			}
    		}
    		for (int i=0;i<k-1;i++)
    			cout<<array[i]<<" ";
    		cout<<array[k-1]<<endl;

    	delete [] array;


    }
    return 0;
}