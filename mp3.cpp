#include <iostream>
#include <string>
using namespace std;

int main()
    {
    int n;
    string cmd;
    while (cin>>n>>cmd)
        {
        int now[4]={1,2,3,4};
        int ops=1;
        if (n<=4)
            {
            for (int i=0;i<cmd.size();i++)
                {
                if (cmd[i]=='U')
                    {
                  ops--;
                if (ops==0)
                    ops=n;
                    
                } else{
                    ops++;
                    if(ops>n)
                        ops=1;
                }

            }
            for (int i=0;i<n-1;i++)
                cout<<now[i]<<" ";
            cout<<now[n-1]<<endl;
            cout<<ops<<endl;
            
        }else{
            
        
        for (int i=0;i<cmd.size();i++)
            {
            if (cmd[i]=='U')
                {
                ops--;
                if (ops==0)
                    {
                    ops=n;
                    now[0]=n-3;now[1]=n-2;
                    now[2]=n-1;now[3]=n;
                    
                }
                else if (ops<now[0]){
                    for (int i=3;i>0;i--)
                        now[i]=now[i-1];
                    now[0]=ops;
                }                
            }
                else if (cmd[i]=='D')
                    {
                    ops++;
                    if (ops>n)
                        {
                        ops=1;
                        now[0]=1;now[1]=2;
                        now[2]=3;now[3]=4;
                        
                    }
                    else if (ops>now[3]){
                        for (int i=0;i<3;i++)
                            {
                            now[i]=now[i+1];
                            
                        }
                        now[3]=ops;
                    }
                    
                }
        }
            for (int i=0;i<3;i++)
                cout<<now[i]<<" ";
            cout<<now[3]<<endl;
            cout<<ops<<endl;
        }
        
    }
    return 0;
        
    
}