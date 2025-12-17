class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>result;
        for(auto operation : operations){
            if (operation != "C" && operation != "D" && operation != "+") {
            result.push(stoi(operation));
        }
        else if(operation=="D"){
            result.push(2*result.top());
        }
        else if(operation=="C"){
            result.pop();
        }
        else if(operation=="+"){
            int top1=result.top();
            result.pop();
            int top2 =result.top();
            result.push(top1);
            result.push(top1+top2);
        }
        }
        int sum=0;
        while(!result.empty()){
            sum+=result.top();
            result.pop();
        }
        return sum;
    }
};