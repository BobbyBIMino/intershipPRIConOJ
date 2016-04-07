/*有一个数组a[N]顺序存放0-N，要求没隔两个数删掉一个数，到末尾时循环至开头继续进行，求最后一个被删掉的数的原始下标位置。以8个数(N=7)为例:｛0，1，2，3，4，5，6，7｝，0->1->2(删除)->3->4->5(删除)->6->7->0(删除),如此循环直到最后一个数被删除。*/#include <iostream>
using namespace std;

int main()
    {
    int n;
    while(cin>>n)
    {

     bool * a=new bool[n];
        for (int i=0;i<n;i++)
       a[i]=true;
    int count1=0;
    int count2=0;
    int count3=0;
    while(count1<n-1)
        {
        while(1)
            {
            if (count2== n) count2=0;
            if (a[count2]&& (count3==2))
                {
                a[count2]=false;
                count2++;
                count3=0;
                break;
            } else 
            if (a[count2])
                {
                count2++;
                count3++;
            }else count2++;
            
        }
        count1++;
        
    }
    for (int i=0;i<n;i++)
        if(a[i])cout<<i<<endl;
    
    delete[] a;
    }

    return 0;
}