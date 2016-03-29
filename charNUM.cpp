#include <iostream>
#include <string>
using namespace std;

int main()
    {
    string str;
    int ch[26]={0};
    cin>>str;
    for(int i=0;i<str.size();i++)
        {
       ch[str[i]-'a']++; 
    }
    int min=10000;
    for (int i=0;i<26;i++)
        {
        if (ch[i]<min)
            min=ch[i];
    }
    for (int i=0;i<str.size();i++)
        {
        if (min!=ch[str[i]-'a'])
            cout<<str[i];
    }
    cin>>n;
    return 0;
}