class Solution {
public:
    int differenceOfSums(int n, int m) {
        int num1=0,num2=0,ans=0;
        vector<int> s(n);
        iota(s.begin(),s.end(),1);
        for(int x:s){
            if(x%m!=0) num1 += x;
            else num2 +=x;
        }
        return num1-num2;
    }
};