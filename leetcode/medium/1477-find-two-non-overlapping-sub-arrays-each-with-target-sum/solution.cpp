class Solution {
public:
    int minSumOfLengths(vector<int>& arr, int target) {

        int ans=-1;
        int j=0;

        int sum=0;
        int minLen=1;

        for (int i=0;i<arr.size();i++)
        {
            sum=sum+arr[j];

            if (sum ==target)
            {
                if (j-i < minLen) 
                {ans++;
                minLen=min(minLen,j-i);}


            
                sum=0;
                j++;
                
            }
            
            if (sum > target)
            {
                sum=0;
                j++;
                
            }
            continue;
        }
        return ans;

        
    }
};