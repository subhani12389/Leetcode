class Solution {
public:
    int minMovesToSeat(vector<int>& se, vector<int>& st) {
        // int mini=INT_MAX;
        int count=0;
        sort(se.begin(),se.end());
        sort(st.begin(),st.end());
        for(int i=0;i<se.size();i++){
            count+=abs(se[i]-st[i]);
        }
        return count;
    }
};