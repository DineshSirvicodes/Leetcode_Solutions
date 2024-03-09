class Solution {
public:
    string removeOuterParentheses(string s) {
        int count = 0;
        string temp = "";
        for(int i = 0 ; i<s.length(); i++){
            if(s[i] == '(' && count == 0){
                count++;
            }
            else if(s[i] == '(' && count>0){
                temp+='(';
                count++;
            }
            else if(s[i] == ')' && count>1){
                temp+=')';
                count--;
            }
            else count--;
        }
        return temp;
    }
};
