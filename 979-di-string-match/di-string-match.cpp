class Solution {
public:
    vector<int> diStringMatch(string s) {
        int low=0;
        int high=s.size();
        vector<int>result;
        for(auto i : s){
            if(i=='I'){
                result.push_back(low);
                low++;
            }
            else{
                result.push_back(high);
                high--;
            }
        }
        result.push_back(low);
        return result;
    }
};