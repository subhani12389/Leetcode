class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& d) {
        int n=d.size();
        set<int>st;
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=0;j<n;j++){
               for(int k=0;k<n;k++){
                    if(i!=j && j!=k && k!=i){
                        sum=d[i]*100+d[j]*10+d[k];
                        if(d[i] != 0 && d[k] % 2 == 0){
                            st.insert(sum);
                        }
                    }
               } 
            }
        }
        return vector<int>(st.begin(),st.end());
    }
};