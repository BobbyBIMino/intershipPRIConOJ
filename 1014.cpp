/*对于每一个我给出的字符串，都在这个词典里面找到以这个字符串开头的所有单词呢？”

身经百战的小Ho答道：“怎么会不能呢！你每给我一个字符串，我就依次遍历词典里的所有单词，检查你给我的字符串是不是这个单词的前缀不就是了？”
*/

/*trie树*/
#include <iostream>
using namespace std;

struct TreeNode
{
     int end;
     char val;

    TreeNode *son[26];
	
     TreeNode(char x) : end(0),val(x) {for (int i=0;i<26;i++) son[i]=NULL;}
}; 

int main()
{
   TreeNode * root=new TreeNode('A');
   string str;
   int size;
   int num;
   cin>>size;
   TreeNode * current;
   for (int i=0;i<size;i++)
   {
   	cin>>str;
   	   	current=root;
   	for (int j=0;j<str.size();j++)
   	{
   		int index=str[j]-'a';
   		if (current->son[index] == NULL)
   		{
   			TreeNode* node=new TreeNode(str[j]);
   			node->end++;
   			current->son[index]=node;
   			current=node;
   
   		}
   		else {
   			TreeNode *node =current->son[index];
   			node->end++;
   			current->son[index]=node;
   			current=node;
   		}
   }
}
   cin>>num;
   string ss;
  for (int i=0;i<num;i++)
  {
  	cin>>ss;
  	bool flag=false;
  	TreeNode * cuu=root;
  	for (int i=0;i<ss.size();i++)
  	{
  		int ind=ss[i]-'a';
  		if(cuu->son[ind]!=NULL)
  			cuu=cuu->son[ind];
  		else 
  			{
  				cout<<0<<endl;
  				flag=true;
  				break;
  			}
  	}
  	if (!flag)
  	cout<<cuu->end<<endl;
  }
	return 0;
}
