class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>st1;
        string ans1="",ans2="";
        stack<char>st2;
        for(char a:s){
            if(a=='#' && st1.empty())continue;
            else if(a=='#') st1.pop();
            else st1.push(a) ;
        }
        while(!st1.empty()){
            ans1 +=st1.top();
            st1.pop();
        }

        for(char b:t){
            if(b=='#' && st2.empty())continue;
            else if(b=='#') st2.pop();
            else st2.push(b) ;
        }
        while(!st2.empty()){
            ans2 +=st2.top();
            st2.pop();
        }
        return ans1==ans2;
    }
};