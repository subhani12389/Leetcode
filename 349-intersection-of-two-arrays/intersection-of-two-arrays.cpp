class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>freq1(nums1.begin(),nums1.end());
        unordered_set<int>set1;

        for(int i : nums2){
            if(freq1.count(i)){
                set1.insert(i);
            }
        }
        return vector<int>(set1.begin(),set1.end());
    }
};