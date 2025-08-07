class Solution {
public:
    bool isPathCrossing(string path) {
        unordered_set<string>st;
        int y=0;
        int x=0;
        string key =to_string(x) + "_" + to_string(y);
        st.insert(key);
        for(auto &val:path){
            if(val=='N'){
                y++;
            }
            else if(val=='S'){
                y--;
            }
            else if(val=='E'){
                x++;
            }
            else{
                x--;
            }
            key=to_string(x) + "_" + to_string(y);
            if(st.find(key)!=st.end()){
                return true;
            }
            st.insert(key);
        }
        return false;
    }
};