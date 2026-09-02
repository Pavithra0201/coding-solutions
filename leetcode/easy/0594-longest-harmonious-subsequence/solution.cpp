class Solution {
public:
    int findLHS(vector<int>& nums) {
        int count=INT_MIN;

        unordered_map<int,int> freq;

        for (int i=0;i<nums.size();i++)
        {
            freq[nums[i]]++;
        }

        int ans=0;

        for (auto& [x,count]:freq)
        {
            if (freq.find(x+1)!= freq.end())
                ans=max(ans,count+freq[x+1]);
        }
       
        return ans;
 
    }
};