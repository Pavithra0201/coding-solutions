class Solution {
  public:
    int binaryToDecimal(string& b) {
        // code here
        int ans=0;
        int k=0;
        for (int i=b.length()-1;i>=0;i--)
        {
            ans+=(b[i]-'0') * pow(2,k);
            k++;
        }
        
        return ans;
        
    }
};