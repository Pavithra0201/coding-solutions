class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int i=digits.size()-1;
        

            if (digits[i] <9)
                {digits[i]+=1;
                return digits;
                }
            else
            {
                while(i>=0 && digits[i]>=9)
                    digits[i]=0;
                    i--;
            }

            digits.insert(digits.begin(),1);
            
            return digits;
            
            
      
    return digits;

        
        
    

    return digits;
    }
};