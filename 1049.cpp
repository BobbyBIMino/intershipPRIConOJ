/*
给出一棵二叉树的前序和中序遍历的结果，还原这棵二叉树并输出其后序遍历的结果。
*/
 #include <iostream>
#include <string>
#include <vector>
using namespace std;

 struct TreeNode {
     char val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(char x) : val(x), left(NULL), right(NULL) {}
  };
 
 TreeNode* reConstructBinaryTree(vector<char> pre,vector<char> in) {
        if (pre.size()!=0)
            {
            TreeNode* node=new TreeNode(pre[0]);
            
            vector<char>  newPreLeft;
            vector<char>  newPreRight;
            vector<char> newInLeft;
            vector<char> newInRight;
            for (int i=0;i<in.size();i++)
                {
                if (pre[0]==in[i])
                    {
                    if (i!=0)
                        {
                         for (int j=0;j<i;j++)
                        {
                        newPreLeft.push_back(pre[j+1]);
                        newInLeft.push_back(in[j]);
                    }
                    node->left=reConstructBinaryTree(newPreLeft,newInLeft);
                         
                    }
                    else node->left=NULL;
                    if(i!=in.size()-1)
                    {                        
                    for (int j=0;j<in.size()-1-i;j++)
                    {
                        newPreRight.push_back(pre[i+j+1]);
                        newInRight.push_back(in[i+j+1]);
                    }
                     node->right=reConstructBinaryTree(newPreRight,newInRight);
                         
                    }
                        else
                            node->right=NULL;   
                     
                    break;
            }        
        }
            return node;
        }
        else return NULL;
    }
void sss(TreeNode* root)
{
	if (root->left !=NULL)
	{
		sss(root->left);
		root->left=NULL;
	}
	if (root->right !=NULL)
	{
	 sss(root->right);
	 root->right=NULL;
	}

	if ((root->left ==NULL)&&(root->right ==NULL))
	{
		cout<<root->val;
		root=NULL;
		return;
	}


}
    int main()
    {
    	string pre;
    	string in;
    	getline(cin,pre);
    	getline(cin,in);
    	vector<char> ppre;
    	vector<char> iin;
    	for (int i=0;i<pre.size();i++)
    		ppre.push_back(pre[i]);
    	for(int j=0;j<in.size();j++)
    		iin.push_back(in[j]);


    TreeNode *root=reConstructBinaryTree(ppre,iin);
    sss(root);


    	return 0;


    }
