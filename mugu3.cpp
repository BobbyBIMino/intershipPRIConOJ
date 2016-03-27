/*
A和B是好友，他们经常在空闲时间聊天，A的空闲时间为[a1 ,b1 ],[a2 ,b2 ]..[ap ,bp ]。B的空闲时间是[c1 +t,d1 +t]..[cq +t,dq +t],这里t为B的起床时间。这些时间包括了边界点。B的起床时间为[l,r]的一个时刻。若一个起床时间能使两人在任意时刻聊天，那么这个时间就是合适的，问有多少个合适的起床时间？*/
#include <iostream>
using namespace std;

int main()
{
	int p,q,l,r;
	while(cin>>p>>q>>l>>r)
	{


	int count=0;
	int *a=new int[p];
	int *b=new int[p];
	int *c=new int[q];
	int *d=new int[q];

	for (int i=0;i<p;i++)
	cin>>a[i]>>b[i];
	for (int j=0;j<q;j++)
	cin>>c[j]>>d[j];
	for (int i=l;i<=r;i++)
	{
		bool flag=false;
		for (int j=0;j<p;j++)
			for (int k=0;k<q;k++)
			{
				if (((c[k]+i >= a[j])&&(c[k]+i <= b[j]))||((d[k]+i >= a[j])&&(c[k]+i <= b[j])))
					flag=true;
			}
			if(flag)
				count++;
	}
	cout<<count<<endl;
	delete[] a;
	delete[] b;
	delete[] c;
	delete[] d;
}
return 0;
}