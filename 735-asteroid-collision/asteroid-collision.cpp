class Solution {
public:
    vector<int> asteroidCollision(vector<int>& at ){
        vector<int> st;
        int n=at.size();
        for(int i=0;i<n;i++){
           if(at[i]>0) st.push_back(at[i]);
           else{
            while(!st.empty() && st.back()>0 && abs(at[i])> st.back()) st.pop_back();
            if(!st.empty() && st.back()==abs(at[i])) st.pop_back();
            else if(st.empty() || st.back()<0) st.push_back(at[i]);
           }
        }
        return st;
    }
};