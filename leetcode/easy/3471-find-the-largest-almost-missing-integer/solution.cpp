class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        unordered_map<int,int>freq;

        unordered_set<int>SubArray;

        for (int i=0;i<=nums.size()-k;i++)
        {
            unordered_set<int>SubArray;

            for (int j=i;j< i+k;j++)
            {
                SubArray.insert(nums[j]);
            }

            for (int x:SubArray)
            {
                freq[x]++;
            }

        }
        int ans=-1;
        

        for (auto x=freq.begin();x!=freq.end();x++)
        {
            if (x->second ==1)
                ans=max(ans,x->first);

        }

        return ans;

        }

        
    
};