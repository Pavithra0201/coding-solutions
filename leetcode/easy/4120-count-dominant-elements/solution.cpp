class Solution {
public:
    int countDominantElements(vector<int>& nums) {
        int count=0;
        for (int i=1;i<nums.size();i++)
        {
            if ((nums[i-1]+nums[i+1])/2 < nums[i])
                count++;
        }

        return count;
        
    }
};