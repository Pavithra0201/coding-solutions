class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        vector<int>nums2;
        

        for (int i=1;i<nums1.size();i++)
        {
            int j=i-1;
            if (nums1[i] %2  ==0 || (nums1[i]-nums1[j]) %2 ==0)
                continue;
            else if (nums1[i] %2  !=0 || (nums1[i]-nums2[j]) %2 !=0)
                continue;
            else
                return false;

        }

        return true;
        
    }
};