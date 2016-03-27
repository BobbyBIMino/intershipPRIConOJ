#include <iostream>
using namespace std;

int main()
    {
    int m,n;
    int ans;
    
    while(cin>>m)
        {
        if (m==0)
            return 0;
        ans=0;
        
        while(m/3 != 0)
            {
             ans+=m/3;
             m=m/3+m%3;

        }
        if (m%3==2)
            ans++;
        cout<<ans<<endl;
    }
    return 0;
}