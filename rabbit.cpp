/**有一对兔子，从出生后第3个月起每个月都生一对兔子，小兔子长到第三个月后每个月又生一对兔子，假如兔子都不死，问每个月的兔子总数为多少？*/
#include <iostream>
using namespace std;

int main()
    {
    int n;
    
    while(cin>>n)
        {
        int *f=new int[n+1];
        f[1]=2;
        f[2]=2;
        f[3]=4;
        if (n>3)
            {
            for (int i=4;i<=n;i++)
                {
                	f[i]=f[i-1]+f[i-2];
            }
        }
        cout<<f[n]<<endl;
        
    }
    return 0;
}