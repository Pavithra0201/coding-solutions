class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {

        for (int i=start;i<nums.size();i++)
        {
            if (nums[i]==target)
                return abs(i-start);
        }

        return -1;
        
    }
};