class Solution {
public:
    string addBinary(string s1, string s2) {
        string ans = "";
        int i = s1.size() - 1;
        int j = s2.size() - 1;
        int carry = 0;

        while (i >= 0 || j >= 0 || carry) {
            int bit1 = (i >= 0 ? s1[i] - '0' : 0);
            int bit2 = (j >= 0 ? s2[j] - '0' : 0);

            int sum = bit1 + bit2 + carry;

            ans.push_back((sum % 2) + '0');
            carry = sum / 2;

            i--;
            j--;
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};