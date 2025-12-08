class Solution {
public:
    int countTriples(int n) {
        int count=0;
        for(int j=1;j<=n;j++){
            for(int i=j+1;i<=n;i++){
                int k=(j*j)+(i*i);
                int c=sqrt(k);

                if(c<=n && c*c==k){
                    count+=1;
                }
            }
        }
        return count*2;
    }
};