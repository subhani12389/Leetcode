class Solution {
public:
    int numOfStrings(vector<string>& p, string word) {
        int count=0;
        for(int i=0;i<p.size();i++){
            if(word.find(p[i])!=string::npos){
                count+=1;
            }
        }
        return count;
    }
};