class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if (n<=1) return n;
        sort(nums.begin(),nums.end());
        int ans=1;
        for (int i=1;i<nums.size();i++)
        {
            if (nums[i]-nums[i-1]==1) 
                ans++;
            
               
        }

        return ans;
        
    }
};