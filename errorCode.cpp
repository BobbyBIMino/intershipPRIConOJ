#include <iostream>
#include <string>
#include <vector>
#include <windows.h>
using namespace std;

int main()
    {
    string str;
    int hang;
    vector<string> name;
    vector<int> count;
    vector<int> nowHang;


    while(cin>>str>>hang)
        {
                bool flag=false;
        int index=str.rfind('\\');
        if (index!=-1)
            {
            str=str.substr(index+1,str.size()-index);
        }
        if (str.size()>16)
            {
            str=str.substr(str.size()-16,16);
        }
        
        for ( i=0;i<name.size();i++)
            {

            if ((str==name[i])&&(hang==nowHang[i]))
                {
                flag=true;
                count[i]++;
                
            }
        }
        if ((!flag))
            {
            name.push_back(str);
            nowHang.push_back(hang);
            count.push_back(1);
        }
        
        
    }
    int cc=name.size()-8;
    if (cc<0)cc=0;
    for (int i=cc;i<name.size();i++)
        {
        if(name[i]!="")
		cout<<name[i]<<" "<<nowHang[i]<<" "<<count[i]<<endl;
    }
    
    return 0;
    
}