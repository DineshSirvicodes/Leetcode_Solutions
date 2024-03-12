class Solution  // Tc -  O(nlogn) + o(n)
public:
    string longestCommonPrefix(vector<string>& strs) {
        int index = 0;
        sort(strs.begin(),strs.end());
        // after sorting we just need to check the first word and last word 
        // if the character at 0th onwards matches then store the result
        string first = strs[0];
        int n = strs.size();
        string last = strs[n-1];
        while(index<first.size()){
            
            if(first[index] == last[index]){
                index++;
            }
            else{
                break;
            }
        }
        if(index == 0) return "";
        else return first.substr(0,index);
    }
};
