class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        int n=order.size();
        vector<int>result;
        for(int i=0;i<n;i++){
            for(int j=0;j<friends.size();j++){
                if(order[i]==friends[j]){
                    result.push_back(order[i]);
                }
            }
        }
        return result;
    }
};