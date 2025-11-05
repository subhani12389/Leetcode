class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int,int>freq;
        for(auto i : arr1){
            freq[i]++;
        }
        vector<int>result1;
        vector<int>result2;
        for(int k=0;k<arr2.size();k++){
            for (auto val : freq){
                if(arr2[k]==val.first){
                    for (int l = 0; l < val.second; l++) {
                        result1.push_back(val.first);
                    }
                }
            }
            freq.erase(arr2[k]);
        }


        for (auto val : freq) {
            for (int l = 0; l < val.second; l++) {
                result2.push_back(val.first);
            }
        }

        
        sort(result2.begin(),result2.end());

        result1.insert(result1.end(),result2.begin(),result2.end());

        return result1;
    }
};