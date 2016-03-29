#include <iostream>
using namespace std;

int main()
    {
    long n,r,avg;
    cin>>n>>r>>avg;
    int * a=new int[n];
    int * b=new int[n];
   	int temp;

    for (int i=0;i<n;i++)
    {
    	cin>>a[i]>>b[i];
    }

    for (int i=0;i<n;i++)
    {
    	for (int j=i;j<n;j++)
    	{
    		if (b[i]<b[j])
    		{
    			temp=b[i];
    			b[i]=b[j];
    			b[j]=temp;
    			temp=a[i];
    			a[j]=temp;
    			a[i]=a[j];
    		}
    	}


    }




    delete[] a;
    delete[] b;
    
    
    
}