class GrayCode {
public:
    vector<string> getGray(int n) {
        if (n==1)
            {
            vector<string> gray;
            gray.push_back("0");
            gray.push_back("1");
            return gray;
        }
        else
        {
            vector<string> gray=getGray(n-1);
            vector<string> newGray;
            for (int i=0;i<gray.size();i++)
                {
                string str="0"+gray[i];
                newGray.push_back(str);
            }
            for (int i=gray.size()-1;i>=0;i--)
                {
                string str="1"+gray[i];
                newGray.push_back(str);
            }  
            return newGray;
        }
    }
};