// TC - O(n) , SC - O(n)
class Solution {
public:
    bool rotateString(string s, string goal) { 
        // if size are not equal then return false
        if(s.size()!=goal.size())
        {
            return false;
        }
        string ans=s+s;
        if(ans.find(goal)== string::npos)
        //npos is a static member constant value of the std::string class in C++. 
        //It represents the largest possible value for the size type used by the string class.
        //the find function of std::string returns std::string::npos when it fails 
        //to find the specified substring within the string.
        {
            return false;
        }
        else
            return true;
    
    }
};
// TC - O(n^2) SC - O(n)
bool rotateString(string s, string goal) {
        if(s.length() != goal.length()) return false;
        int n = s.length();
        for(int shift = 0 ; shift<n ; shift++){
            // rotate s to generate all possible configurations
            if(s == goal){
                return true;  
            }      
            
            // rotate s once
            char temp = s[0];
            for(int i = 0; i < n-1 ; i++){
                s[i] = s[i+1]; // shifting 1 element to the left b->1 to b->0
            }
            s[n-1] = temp; // a at last index during first shift
        }
        return false;
}
