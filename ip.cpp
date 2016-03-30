#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main()
    {
    string ip;
    unsigned long num;
    long ten;
    while(cin>>ip>>ten)
        {
            //2TO10
        long nn;
        int temp;
        num=0;
        string sub;
        temp=ip.find('.');
       	sub=ip.substr(0,temp);  
        
        ip=ip.substr(temp+1);

        nn=atoi(sub.c_str());
        num+=nn*256*256*256;
        temp=ip.find('.');
       	sub=ip.substr(0,temp);   

        ip=ip.substr(temp+1);

        nn=atoi(sub.c_str());
        num+=nn*256*256;
        temp=ip.find('.');
       	sub=ip.substr(0,temp);   
        

        ip=ip.substr(temp+1);

        
        nn=atoi(sub.c_str());
        num+=nn*256;
        nn=atoi(ip.c_str());
        num+=nn;
        cout<<num<<endl;
        cout<<(ten/(256*256*256))%(256)<<"."<<(ten/(256*256))%(256)<<"."<<(ten/(256))%(256)<<"."<<ten%256<<endl;
    }
}