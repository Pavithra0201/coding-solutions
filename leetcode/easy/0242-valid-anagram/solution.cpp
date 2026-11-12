class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> freq;
        if(s.size()!=t.size())
            return false;

       sort(s.begin(),s.end());
       sort(t.begin(),t.end());

       return s==t;
        
    }
};