class Solution {
public:
    int titleToNumber(string columnTitle) {
        int output=0;
        for (int i=0;i<columnTitle.size();i++)
        {
            char c=columnTitle[i];
            int val=c-'A'+1;

            output=output*26+val;

        }
        return output;
        
    }
};