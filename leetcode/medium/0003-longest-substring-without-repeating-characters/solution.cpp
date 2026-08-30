class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.length()==1) return 1;
         int ans=-1;
        int j=0;
        for (int i=1;i<s.length();i++)
        {
            
                
                
            if (s[j]==s[i] || s[i]==s[i+1])
            {   int curr=s.substr(j,i-j).length();
                ans=max(curr,ans);
                j++;
            }
                
            
        }

        return ans;
        
        
    }
};