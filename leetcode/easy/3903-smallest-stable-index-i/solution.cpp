class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        if(nums.size()<=1) return 0;

        int mini=nums[0];
        int maxi=nums[0];
        

        int diff;

        for (int i=0;i<nums.size();i++)
        {
            
            maxi=*max_element(nums.begin(),nums.begin()+i);
            mini=*min_element(nums.begin()+i,nums.end());

            if (maxi - mini < k)
                return i;

        }

        return -1;
        
    }
};