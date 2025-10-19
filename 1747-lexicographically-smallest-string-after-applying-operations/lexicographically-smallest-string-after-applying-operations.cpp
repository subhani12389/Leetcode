class Solution {
public:
void rotate(string &s , int b){
    
    reverse(s.begin(),s.end());
    reverse(s.begin(),s.begin()+b);
    reverse(s.begin()+b,s.end());
}
    string findLexSmallestString(string s, int a, int b) {
        unordered_set<string> vis;           
        string smallest = s;                  
        queue<string> q;                      
        vis.insert(s); 
        q.push(s);                      
        while (!q.empty()) {
            string cur = q.front(); q.pop(); 
            if (cur < smallest) smallest = cur;  
            string added = cur;
            for (int i = 1; i < added.size(); i += 2)
                added[i] = ((added[i] - '0' + a) % 10) + '0';
            if (!vis.count(added)) {
                q.push(added);
                vis.insert(added);
            }
            string rotated = cur;   
            rotate(rotated, b); 
            if (!vis.count(rotated)) {
                vis.insert(rotated);
                q.push(rotated);
            }
        }

        return smallest;                     
    }
};
