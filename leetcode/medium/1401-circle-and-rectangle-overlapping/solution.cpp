class Solution {
public:
    bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2) {

        int xrad= radius-xCenter;
       if (xrad ==x1 || xrad==x2)
            return true;

        int yrad= radius-yCenter;
        if (yrad== y1 || yrad == y2)
            return true;
        
        return false;

        

       
        
    }
};