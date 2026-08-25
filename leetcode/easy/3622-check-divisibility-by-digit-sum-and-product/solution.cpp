class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0,product=1;
        int temp=n;
        while(n>0)
        {
            int ld=n%10;
            sum+=ld;
            product*=ld;
            n=n/10;
        }

        return !(temp % (sum+product));
        
    }
};