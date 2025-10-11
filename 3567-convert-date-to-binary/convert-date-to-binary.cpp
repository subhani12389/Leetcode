class Solution {
public:
    string convertDateToBinary(string date) {
        vector<string> a;
        string copy="";
        for(char i : date){
            if(i!='-'){
                copy+=i;
            }
            else{
                a.push_back(copy);
                copy="";
            }
        }
        a.push_back(copy);
        string sb="";
        for(auto i : a){
            int num=stoi(i);
            string bin=bitset<16>(num).to_string();
            bin.erase(0, bin.find_first_not_of('0'));
            if (bin.empty()) bin = "0";

            sb += bin + "-";
        }
        sb.pop_back();
        return sb;
    }
};