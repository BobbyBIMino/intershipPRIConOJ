#include <iostream>
#include <vector>
using namespace std;

int main()
    {
    int n;
    int temp;
    vector<int> array;
    while(cin>>n){
    for (int i=0;i<n;i++)
        {
        cin>>temp;
        if (array.size()==0)
            array.push_back(temp);
        else 
            {
            bool flag=false;
            for (int i=0;i<array.size();i++)
                {
                if (temp<array[i])
                    {
                    array.insert(array.begin()+i,temp);
                    flag=true;
                    break;
                } else if (temp==array[i])
                    {
                    flag=true;
                    break;
                }
                    
            }
            if(!flag)
                array.push_back(temp);
        }
    }
    for (int i=0;i<array.size();i++)
        {
        cout<<array[i]<<endl;
    }
    }
        return 0;
        
}
