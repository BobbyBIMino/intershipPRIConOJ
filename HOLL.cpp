/*
 
精灵王子爱好冒险，在一次探险历程中，他进入了一个神秘的山洞。在洞穴深处，
精灵王子不小心触动了洞穴内暗藏的机关，整个洞穴将很快塌陷，精灵王子必须尽快逃离洞穴。
精灵王子的跑步速度为17m/s，以这样的速度可能是无法逃出洞穴的。
庆幸的是精灵王子拥有闪烁法术，可在1s内移动60m，不过每次使用闪烁法术都会消耗魔法值10点。
精灵王子的魔法值恢复的速度为4点/s，只有处在原地休息状态时才能恢复。
现在已知精灵王子的魔法初值M，他所在洞穴中的位置与洞穴出口之间的距离S，
距离洞穴塌陷的时间T。你的任务是写一个程序帮助精灵王子计算如何在最短的时间内逃离洞穴。
若能逃出，输出"Yes"，并输出逃出所用的最短时间；若不能逃出，则输出"No"，同时输出精灵王子在剩下的时间内能走的最远距离。
注意字母大小写。注意:精灵王子跑步、闪烁或休息活动均以秒(s)为单位。且每次活动的持续时间为整数秒。
距离的单位为米(m)。

注：M、S、T均是大于等于0的整数。由输入保证取值合法性，考生不用检查。

提醒：

如果输入的S为0，则说明本身已经在出口，输出应为：Yes 0

如果输入的T为0（且S不为0），则说明已经没有时间了，输出应为：No 0
 */
#include<iostream>  
  
using namespace std;  
  
  
int main()  
{  
  
    int M,S,T ;  
    while(cin >> M >> S >> T)  
    {  
        int distance1=0;  
        int distance2=0;  
        int start = T;  
        int startdis = S;  
        bool flag = false;  
        if(S==0)  
        {  
            cout<<"Yes"<<" "<<0<<endl;  
        }else if(T==0)  
        {  
            cout<<"No"<<" "<<0<<endl;  
        }  
        else  
        {  
            while(T)  
            {  
                T--;  
                if(M>=10)  
                {  
                    M -= 10;  
                    distance1+=60;  
                }else  
                    M += 4;  
                distance2 += 17;  
                if(distance2<distance1)  
                    distance2=distance1;  
                if(distance2>=S)  
                {  
                    flag = true;  
                    break;  
                }  
                  
            }  
            if(flag)  
            {  
                cout<<"Yes"<<" "<<(start-T)<<endl;  
            }else  
            {  
                cout<<"No"<<" "<<distance2<<endl;  
            }  
        }  
          
    }  
  
    return 0;  
}  
