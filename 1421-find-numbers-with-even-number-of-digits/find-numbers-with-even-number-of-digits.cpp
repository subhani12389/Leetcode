class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n=nums.size();
        int allcount=0;
        for(int i=0;i<n;i++){
            int count=0;
            while(nums[i]>0){
                int rem=nums[i]%10;
                count+=1;
                nums[i]=nums[i]/10;
            }
            if(count%2==0){
                allcount+=1;
            }
        }
        return allcount;
    }
};