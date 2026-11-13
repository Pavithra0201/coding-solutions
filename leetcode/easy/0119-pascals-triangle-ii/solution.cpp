class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>>nums;

        for (int i=0;i<=rowIndex;i++)
        {
            vector<int> s(i+1,1);

            for (int j=1;j<i;j++)
            {
                s[j]=nums[i-1][j-1]+nums[i-1][j];
            }

            nums.push_back(s);

            
        }

        return nums[rowIndex];
        
    }
};