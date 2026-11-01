class Solution {
public:
    int findCenter(vector<vector<int>>& e) {
        int n=e.size();
        int a=0,temp=0;

        vector<int>ans(n+2);
        for(int i=0;i<n;i++){
            ans[e[i][0]]++;
            ans[e[i][1]]++;
        }
        for(int i=1;i<=n+1;i++){
            if(ans[i]>temp){
                a=i;
                temp=ans[i];
            }
        }
        return a;
        
    }
};