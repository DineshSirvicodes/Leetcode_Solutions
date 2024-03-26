// Optimal Sol  TC - O(n)
class Solution {
public:
    string reverseWords(string s) {
        int left = 0;
        int right = s.length()-1;
        string temp = "";
        string ans = "";
        while(left<=right){
            char ch = s[left];
            if(ch != ' '){
                temp+=ch;
            }
            else {
                if(!temp.empty()){
                    if(!ans.empty()) ans = temp + " " + ans;
                    else ans = temp;
                    temp = "";
                }
            }
            left++;
        }
        //If not empty string then add to the result(Last word is added) to the string 
        // after the iteration of left<=right
        // left++ stores temp = blue then left > right 
        // so now the last word is added to the ans at the front, temp at the front -> temp + "  " + ans;
        if(!temp.empty()){
            if(!ans.empty()) ans = temp + " " + ans;
            else ans = temp;
        }
        return ans;

    }
};


