class Solution {
public:
    int lastStoneWeight(vector<int>& s) {
        while(s.size()>1){
            sort(s.begin(),s.end());

            int a=s.back(); s.pop_back();
            int b =s.back(); s.pop_back();

            s.push_back(abs(a-b));
        }
        return s[0];
    }
};