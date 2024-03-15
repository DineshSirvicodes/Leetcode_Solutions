// TC - 2*O(nlogn)  SC - O(1)
bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        return s==t; // true if equal else false
}
// TC - O(n), using hashmap to store count of string s and string t, in which add the count of s[i] and decrement t[i], if the count at each point in mpp is zero , return true
bool isAnagram(string s, string t) {
        if(s.length()!=t.length()){
            return false;
        }
        unordered_map<char,int> mpp;
        for(auto it: s){
            mpp[it]++;
        }
        for(auto it:t){
            mpp[it]--;
        }
        for(auto it : mpp){
            if( it.second != 0){ // while incrementing and decrementing
            // s[i] and t[i] the end result must be 0
                return false;
            }
        }
        return true;
}


