class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int prevCount = 0;
        int totalBeams = 0;

        for (int i = 0; i < bank.size(); i++) {
            int curCount = 0;
            for (char c : bank[i]) {
                if (c == '1') curCount++;
            }

            if (curCount > 0) {
                totalBeams += prevCount * curCount;
                prevCount = curCount; 
            }
        }

        return totalBeams;
    }
};
