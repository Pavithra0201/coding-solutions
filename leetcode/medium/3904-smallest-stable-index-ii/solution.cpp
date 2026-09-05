class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int min=0;
        int max=0;

        for (int i=0;i<nums.size();i++)
        {
            max=*max_element(nums.begin(),nums.begin()+i);
            min=*min_element(nums.begin()+i,nums.end());

            if (max-min <=k)
                return i;

        }

        return -1;
        
    }
};