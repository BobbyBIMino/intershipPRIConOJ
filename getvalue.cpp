class Gift {
public:
    int getValue(vector<int> gifts, int n) {
		int now;
        int num=1;
        now=gifts[0];
        for(int i=1;i<gifts.size();i++)
            {
            if ((num==0)&&(now!=gifts[i]))
                {
                now=gifts[i];
                num++;
            }
            else if (now==gifts[i])
                {
                num++;
            }
            else num--;
                 
        }
		return num;
        
    }
};