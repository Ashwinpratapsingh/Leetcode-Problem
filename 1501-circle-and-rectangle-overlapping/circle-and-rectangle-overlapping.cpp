class Solution {
public:
    bool checkOverlap(int radius, int xc, int yc, int x1, int y1, int x2, int y2) {
        int xp=max(x1,min(xc,x2));
        int yp=max(y1,min(yc,y2));
        int d=sqrt(((xc-xp)*(xc-xp)+(yc-yp)*(yc-yp)));
        if(d>radius) return false;
        return true;
    }
};