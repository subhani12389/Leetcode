class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        sort(points.begin(),points.end());
        int result=0;
        for(int i=1;i<points.size();i++){
            int width=points[i][0]-points[i-1][0];
            result=max(result,width);
        }
        return result;
    }
};