class Solution {
public:
    vector<int> twoSum(vector<int>& num, int target) {
        int n=num.size();
        int st=0;
        int end=n-1;
        while(st<end){
            int total=num[st]+num[end];
            if(total ==target){
                return{st+1,end+1};
            }
            else if(total>target){
                end--;
            }
            else{
                st++;
            }
        }
        return {-1,-1};
    }
};