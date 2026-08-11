class Solution {
public:

    vector<int> getNSL(vector<int> &arr, int n){
        stack<int> st;
        vector<int> result(n);
        for(int i=0;i<n;i++){
            while(!st.empty() && arr[st.top()]>= arr[i]){
                st.pop();
            }
            result[i]=st.empty() ? -1: st.top();
            st.push(i);
        

        }
        return result;
    }


    vector<int> getRSL(vector<int> &arr, int n){
        stack<int> st;
        vector<int> result(n);
        for(int i=n-1;i>=0;i--){
           
            while(!st.empty() && arr[st.top()]> arr[i]){
                st.pop();
            }
            result[i]=st.empty() ? n: st.top();
            st.push(i);

        }
        return result;
    }


    int sumSubarrayMins(vector<int>& arr) {
        int n = arr.size();
        vector<int> NSL = getNSL(arr,n);
        vector<int> RSL = getRSL(arr,n);
        
        long long M = 1000000007;

        long long sum = 0;
        for(int i=0;i<n;i++){
            long long ls=i-NSL[i];
            long long rs=RSL[i]-i;
            long long total = ls*rs;
            long long totalsum = total*arr[i];
            sum = (sum + totalsum)%M;
            
        }
        return sum;
        
    }
};