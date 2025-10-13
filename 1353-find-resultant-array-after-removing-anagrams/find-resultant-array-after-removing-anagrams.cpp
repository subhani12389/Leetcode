class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        for (int i = 1; i < words.size(); i++) {
            string a = words[i], b = words[i - 1];
            sort(a.begin(), a.end());
            sort(b.begin(), b.end());
            if (a == b) {
                words.erase(words.begin() + i);
                i--; 
            }
        }
        return words;
    }
};
