class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> set;

        int left=0,right=0,maxLen=0;
        while(right < s.size())
        {
            if (!set.count(s[right]))
            {
                set.insert(s[right]);
                maxLen=max(maxLen,right-left+1);
                right++;


            }

            else
            {
                set.erase(s[left]);
                left++;
            }
        }

        return maxLen;

    }
};