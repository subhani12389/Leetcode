class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int n = tickets.size();
        int total = 0;

        for (int i = 0; i < n; i++) {
            if (i <= k) {
                if (tickets[i] < tickets[k])
                    total += tickets[i];
                else
                    total += tickets[k];
            } else {
                if (tickets[i] < tickets[k])
                    total += tickets[i];
                else
                    total += tickets[k] - 1;
            }
        }
        return total;
    }
};
