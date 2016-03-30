/*
假设一个球从任意高度自由落下，每次落地后反跳回原高度的一半; 再落下, 求它在第5次落地时，共经历多少米?第5次反弹多高？ 
*/


#include <iostream>
#include <cmath>
using namespace std;

int main()
    {
    double high;
    while(cin>>high)
        {
        double Jou;
        double hight;
        hight=high/32;
        Jou=high*(1+1+0.5+0.25+0.125);
        cout<<Jou<<endl;
        cout<<hight<<endl;
    }
    return 0;
}