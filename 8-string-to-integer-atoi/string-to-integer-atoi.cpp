class Solution {
public:
    int myAtoi(string s) {
        long long rev = 0;
        int sign = 1;
        int i = 0;
        while(i < s.size() && s[i] == ' ') i++;

            if(i < s.size() && (s[i] == '+' || s[i] == '-')) {
                if(s[i] == '-') sign = -1;
                    i++;
        }

        for(; i < s.size(); i++) {
            if(s[i] >= '0' && s[i] <= '9') {
                rev = rev * 10 + (s[i] - '0');
                if(sign == 1 && rev > INT_MAX) return INT_MAX;
                if(sign == -1 && -rev < INT_MIN) return INT_MIN;
            } else break; 
        }
        return rev*sign;
    }
};