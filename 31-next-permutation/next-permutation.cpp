class Solution {
public:
    void nextPermutation(vector<int>& arr) {
        int n=arr.size();
        int i=n-2;
        while(i>=0 && arr[i]>=arr[i+1]){
            i--;
        }
        if(i>=0){
            int j=n-1;
            while(arr[i]>=arr[j]){
                j--;
            }
            swap(arr[i],arr[j]);
        }
        sort(arr.begin()+i+1,arr.end());
    }
};