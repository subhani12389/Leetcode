class Solution {
public:
    int numOfUnplacedFruits(vector<int>& f, vector<int>& b) {
        int count=0;
        for(int i=0;i<f.size();i++){
            for(int j=0;j<b.size();j++){
                if(f[i]<=b[j]){
                    count+=1;
                    b.erase(b.begin()+j);
                    break;
                }
            }
        }
        if(count==f.size()){
            return 0;
        }
        else{
            return f.size()-count;
        }
    }
};