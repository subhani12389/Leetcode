class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>copy=heights;
        int count=0;
        sort(copy.begin(),copy.end());

        for(int i=0;i<heights.size();i++){
            if(heights[i]!=copy[i]){
                count+=1;
            }
        }
        return count;
    }
};