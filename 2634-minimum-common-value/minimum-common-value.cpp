class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int i=0;
        int j=0;
        int n=nums1.size();
        int m=nums2.size();
        int sum=-1;
        while(i<n && j<m && sum==-1){
            if(nums1[i]==nums2[j]){
                sum=nums1[i];
            }
            else if (nums1[i] < nums2[j]) {
                i++;              
            } 
            else{
                j++;
            }
        }
        return sum;
    }
};