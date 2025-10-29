class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int n=piles.size();
        int you=0;
        sort(piles.begin(),piles.end());
        for(int i=n-2;i>=n/3;i-=2){
            you+=piles[i];
        }
        return you;
    }
};