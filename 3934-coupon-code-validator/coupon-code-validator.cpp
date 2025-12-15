class Solution {
public:
bool CheckValid(string &code){
        if(code.empty()){
            return false;
        }
        for (char j : code) {
            if(!isalnum(j) && j != '_') {
                return false;
            }
        }
        return true;
}
    vector<string> validateCoupons(vector<string>& code,
                                   vector<string>& businessLine,
                                   vector<bool>& isActive) {

        vector<pair<int, string>> result;

        unordered_map<string, int> mp = {
            {"electronics", 1},
            {"grocery", 2},
            {"pharmacy", 3},
            {"restaurant", 4}
        };

        for (int i = 0; i < code.size(); i++) {
            if (CheckValid(code[i]) &&
                mp.count(businessLine[i]) &&
                isActive[i]) {

                result.push_back({mp[businessLine[i]], code[i]});
            }
        }
        sort(result.begin(),result.end());
        vector<string>result1;
        for(auto val : result){
            result1.push_back(val.second);
        }

        return result1;
    }
};
