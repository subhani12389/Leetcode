class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int time=0;
        int m=0;
        int p=0;
        int g=0;
        for(int i=0;i<garbage.size();i++){
            for(int j=0;j<garbage[i].size();j++){
                if(garbage[i][j]=='M'){
                    g=i;
                }
                else if(garbage[i][j]=='P'){
                    p=i;
                }
                else{
                    m=i;
                }
                time++;
            }
        }
        for(int i=1;i<travel.size();i++){
            travel[i]+=travel[i-1];
        }
        time+= m>0 ? travel[m-1]:0;
        time+=p>0 ? travel[p-1]:0;
        time+=g>0 ? travel[g-1]:0;

        return time;
    }
};