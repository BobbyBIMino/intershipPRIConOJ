#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0;
        int j=0;
        while((i<=m)&&(j<=n))
        {
            if (nums2[j]>nums1[i])
            {
                nums1.insert(nums1.begin()+i);
                i+=2;
                j+=1;
            }
            else i++;
        }
        
        if (j<n)
        {
            for(int k=j;k<n;k++)
            nums1.insert(nums1.end());
        }
    }
};

int main()
{
	Solution sol;
	return 0;
}