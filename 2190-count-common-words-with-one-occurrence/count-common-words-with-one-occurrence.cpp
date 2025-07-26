class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string,int>freq1;
        vector<int>ans;
        for(auto i:words1){
            freq1[i]++;
        
        }
        vector<int>ans1;
        unordered_map<string,int>freq2;
        for(auto j:words2){
            freq2[j]++;
        }
        int count = 0;
        for (auto& [word, freq] : freq1) {
            if (freq == 1 && freq2[word] == 1) {
                count++;
            }
        }

        return count;
    }
};