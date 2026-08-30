class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n=nums.size();
        if (n<=2) return n;

        int minInd=min_element(nums.begin(),nums.end())-nums.begin();
        int maxInd=max_element(nums.begin(),nums.end())-nums.begin();

        
        int max_pos=max(minInd,maxInd);
        int min_pos=min(minInd,maxInd);
        
        int from_front=max_pos+1;
        int from_back= n-min_pos;
        int both= (min_pos +1) +(n-max_pos);
                

        

        return min({from_front,from_back,both});

        
    }
};