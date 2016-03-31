/*   小明是个马大哈，某天他到超市买了若干双筷子(小于20)
    筷子的长度不尽相同，他把全部筷子都放在购物袋里面拿回家，路上不小心漏了一根
    请你用程序帮他找出漏掉的筷子是多长的。*/

 #include <iostream>
 #include <vector>
 using namespace std;
 struct node
 {
 	int value;
 	int count;
 	
 };

int main()
{
	int n;
	cin>>n;
	int val;
	vector<node> array;
	for (int i=0;i<n;i++)
	{
		cin>>val;
		bool flag=false;
		for (int i=0;i<array.size();i++)
		{
			if(val== array[i].value)
			{
				array[i].count++;
				flag=true;
			}
		}
		if (!flag)
		{
		node no;
		no.value=val;
		no.count=1;		
		array.push_back(no)	;
		}




	}
	bool flg=false;
	for (int i=0;i<array.size();i++)
	{
		if(array[i].count % 2 !=0)
		{
			cout<<array[i].value;
			flg=true;
			break;
		}
	}
	if (!flg)
		cout<<-1;

	return 0;


}