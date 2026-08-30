class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.length()==1) return 1;

        unordered_set<char> str;
         int ans=-1;
        int j=0;
        
        for (int i=0;i<s.length();i++)
        {
            while(str.count(s[i]))
            {
                str.erase(s[j]);
                j++;
            }

            str.insert(s[i]);

            ans=max(ans,(i-j)+1);
                
                
             
            
        }

        
        return ans;
        
        
    }
};