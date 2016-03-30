#include <iostream>
using namespace std;

int main()
    {
    int n;
    int x=0;
    int y=0;
    int z=0;
    cin>>n;
    y=-2;
    for (int row=1;row<=n;row++)
        {
        int num=row+z-1;
        x=y+3;
        
        for (int i=1;i<=n-row+1;i++)
            {
            cout<<num+x<<" ";
            num+=x;
            x++;
        }
        y++;
        z+=y;
        
        cout<<endl;

    }
    
    return 0;
}