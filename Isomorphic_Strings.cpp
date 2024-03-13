bool isIsomorphic(string s, string t) {
       char mpp_s[128] = {0};
       char mpp_t[128] = {0};
       for(int i = 0 ; i<s.size(); i++){
            if(mpp_s[s[i]] != mpp_t[t[i]]) return false;
            
            mpp_s[s[i]] = i+1;
            mpp_t[t[i]] = i+1;
       } 
       return true;
} 
//   Example with "egg" and "add":

// For the first character, 'e' in s and 'a' in t:
// mpp_s['e'] is 0, mpp_t['a'] is 0: Both are 0, so assign 1 to both.
// For the second character, 'g' in s and 'd' in t:
// mpp_s['g'] is 0, mpp_t['d'] is 0: Both are 0, so assign 2 to both.
// For the third character, 'g' in s and 'd' in t:
// mpp_s['g'] is 2, mpp_t['d'] is 2: Both are 2, so continue.
// Since all characters match their respective mappings, the function returns true, indicating that the strings are isomorphic.

// Example with "foo" and "bar":

// For the first character, 'f' in s and 'b' in t:
// mpp_s['f'] is 0, mpp_t['b'] is 0: Both are 0, so assign 1 to both.
// For the second character, 'o' in s and 'a' in t:
// mpp_s['o'] is 0, mpp_t['a'] is 0: Both are 0, so assign 2 to both.
// For the third character, 'o' in s and 'r' in t:
// mpp_s['o'] is 2, mpp_t['r'] is 0: Different mappings, so return false.
// Since the mappings for 'o' are different, the function returns false, indicating that the strings are not isomorphic.
