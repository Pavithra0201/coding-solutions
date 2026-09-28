class Solution {
public:
    int maxDepth(string s) {
        
        int left=0,right=0;
        int ans=-1;
        for (int i=0;i<s.length();i++)
        {
                char ch=s[i];

                if (ch=='(')
                {  
                     left++;
                }

                if (ch==')')
                {
                    right++;
                }

               ans=max(ans,left-right); 

        }
        return ans;
    }
};