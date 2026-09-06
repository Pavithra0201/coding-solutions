class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        int sum=0;
       
        for (int i=0;i<k;i++)
        {
            sum+=arr[i];
        }
        
        int maxSum=sum;
        
        
        for (int r=k;r<arr.size();r++)
        {
            sum +=arr[r];
           
            sum -=arr[r-k];
           
            
            maxSum=max(maxSum,sum);
            
        }
        
        return maxSum;
    }
};