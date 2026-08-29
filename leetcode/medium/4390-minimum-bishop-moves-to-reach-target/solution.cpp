class Solution {
public:
    int minBishopMoves(vector<int>& source, vector<int>& target) {

   int r1=source[0];
    int c1=source[1];
    int r2=target[0];
    int c2=target[1];

    if (r1==r2 && c1==c2) return 0;

    else if ((r1+c1) %2 != (r2+c2)%2)
         return -1;   
     
    else if (abs(source[0]-target[0]) == abs(source[1]-target[1]))
        return 1;
    else
        return 2;

            
    }
        
        
    

   
    
};