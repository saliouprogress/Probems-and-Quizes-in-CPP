#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) 
    {
        vector<int> nums3;
        
        for (int i = 0; i < nums1.size(); i++)
        {
            nums3.push_back(nums1[i]);
        }
        
        for (int i =0 ; i < nums2.size(); i++)
        {
            nums3.push_back(nums2[i]);
        }
        
        sort(nums3.begin(), nums3.end());
        for (int i = 0; i < nums3.size(); i++) { cout << nums3[i] << endl;}
        // cout << 2.50 << endl;
        if (nums3.size() % 2 == 0)
        {
            int index1, index2;
            index1 = nums3.size()/2-1;
            index2 = index1 +1;
            //cout << ( nums3[index1] + nums3[index2] )/2 << endl;
            double a = nums3[index1]+nums3[index2];
            return a/2;
        }
        
        else if (nums3.size()%2 != 0)
        {
            int index = (nums3.size())/2;
            
            return double(nums3[index]);
        }
    }
};

int main()
{
Solution A;
vector<int> v1{ 1, 2}; vector<int> v2{3, 4,5,6}; 

cout << A.findMedianSortedArrays(v1,v2) << endl;
return 0;
}
