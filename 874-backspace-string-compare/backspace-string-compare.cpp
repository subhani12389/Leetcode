class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>st;
        for(auto i: s){
            if(i!='#'){
                st.push(i);
            }
            else if(i=='#' && !st.empty()){
                st.pop();
            }
        }
        stack<char>st1;
        for(auto i: t){
            if(i!='#'){
                st1.push(i);
            }
            else if(i=='#' && !st1.empty()){
                st1.pop();
            }
        }
        return st==st1;
    }
};