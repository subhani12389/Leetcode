class Solution {
public:
    string compressedString(string word) {
        int n = word.size();
        if (n == 0) return "";
        
        string st;
        char cur = word[0];
        int count = 1;
        
        for (int i = 1; i < n; ++i) {
            if (word[i] == cur) {
                ++count;
            } else {
                // flush current run, splitting into blocks of max 9
                while (count > 9) {
                    st += '9';
                    st.push_back(cur);
                    count -= 9;
                }
                st += to_string(count);
                st.push_back(cur);
                
                // start new run
                cur = word[i];
                count = 1;
            }
        }
        
        // flush the final run
        while (count > 9) {
            st += '9';
            st.push_back(cur);
            count -= 9;
        }
        st += to_string(count);
        st.push_back(cur);
        
        return st;
    }
};
