/*
小Hi和小Ho是一对好朋友，出生在信息化社会的他们对编程产生了莫大的兴趣，他们约定好互相帮助，在编程的学习道路上一同前进。
这一天，他们遇到了一只河蟹，于是河蟹就向小Hi和小Ho提出了那个经典的问题：“小Hi和小Ho，你们能不能够判断一段文字（原串）里面是不是存在那么一些……特殊……的文字（模式串）？”
小Hi和小Ho仔细思考了一下，觉得只能想到很简单的做法，但是又觉得既然河蟹先生这么说了，就肯定不会这么容易的让他们回答了，于是他们只能说道：“抱歉，河蟹先生，我们只能想到时间复杂度为（文本长度 * 特殊文字总长度）的方法，即对于每个模式串分开判断，然后依次枚举起始位置并检查是否能够匹配，但是这不是您想要的方法是吧？” 
河蟹点了点头，说道：”看来你们的水平还有待提高，这样吧，如果我说只有一个特殊文字，你能不能做到呢？“
小Ho这时候还有点晕晕乎乎的，但是小Hi很快开口道：”我知道！这就是一个很经典的模式匹配问题！可以使用KMP算法进行求解！“
河蟹满意的点了点头，对小Hi说道：”既然你知道就好办了，你去把小Ho教会，下周我有重要的任务交给你们！“
”保证完成任务！”小Hi点头道。
*/

/*kmp*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
int n;
cin>>n;
for (int i=0;i<n;i++)
{
	string str;
	string mod;
	cin>>mod;
	cin>>str;

	int * next=new int [mod.size()+1];
	next[0]=-1;
	next[1]=0;
	//next
	for (int i=2;i<=mod.size();i++)
	{
	    int q=next[i-1];
	    while ((mod[i-1]!=mod[q])&&(q!=0))
	    	q=next[q];
	    
	    if (mod[i-1]==mod[q])
	    	next[i]=q+1;  
	    else next[i]=0;
	    

	}
	//kmp
	int count=0;
	str.insert(str.begin(),'#');
	mod.insert(mod.begin(),'#');

    long p=0;
    long q=0;
    while(p<str.size())
    {
    	while(str[p+1]==mod[q+1])
    	{
    		p++;
    		q++;
    		if (q==(mod.size()-1))
    		{
    			q=0;
    			p-=(mod.size()-2);
    			count++;
    		}
    	}
    	while((str[p+1]!=mod[q+1])&&(q!=-1))
    		q=next[q];
    	if(q==-1)
    	{
    		p++;
    		q++;
    	}
    }
   cout<<count<<endl;

	delete[] next;


}
int k;
cin>>k;
return 0;
}