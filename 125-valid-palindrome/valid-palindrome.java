class Solution {
    public boolean isPalindrome(String s) {
        String low=s.toLowerCase();
        StringBuilder ans = new StringBuilder();
        for(char ch:low.toCharArray()){
            if(Character.isLetterOrDigit(ch)){
                ans.append(ch);
            }
        }
        int st=0;
        int end=ans.length()-1;
        while(end>=st){
            if(ans.charAt(end)!=ans.charAt(st)){
                return false;
            }
            end--;
            st++;
        }
        return true;

    }
}