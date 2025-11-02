class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {

        int n = nums1.size();
        int m = nums2.size();

        unordered_set<int> s1(nums1.begin(), nums1.end()); 
        unordered_set<int> s2(nums2.begin(), nums2.end()); 

        int answer1 = 0, answer2 = 0;

        for (int i = 0; i < n; i++) {
            if (s2.find(nums1[i]) != s2.end()) { 
                answer1++;
            }
        }

        
        for (int i = 0; i < m; i++) {
            if (s1.find(nums2[i]) != s1.end()) { 
                answer2++;
            }
        }

        return {answer1, answer2};
    }
};