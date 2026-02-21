class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int>result;
        for(auto i :nums){
            if(i==0){
                result.push_back(0);
            }
        }
        for(auto i :nums){
            if(i==1){
                result.push_back(1);
            }
        }
        for(auto i :nums){
            if(i==2){
                result.push_back(2);
            }
        }
        nums=result;
    }
};