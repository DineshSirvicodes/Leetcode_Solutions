class Solution {
public:
    int maxDepth(string s) {
        int cnt = 0;
        int maxicnt = 0;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '('){
                cnt++;
            }
            else if(s[i] == ')'){
                maxicnt = max(maxicnt,cnt);
                cnt--;
            }
        }
        return maxicnt;
    }
};
