#include<bits/stdc++.h>
class Solution {
  public:
    string decToBinary(int n) {
        // code here
        
        if (n<=1)
            return to_string(n);
    string ans;
    while(n>0)
    {
        
        int rem=n%2;
        ans.push_back(rem +'0');
        n=n/2;
    }
    
     
    reverse(ans.begin(),ans.end());
    return ans;
    
    }
};