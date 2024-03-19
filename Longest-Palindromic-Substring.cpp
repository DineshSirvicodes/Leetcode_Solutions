// Non DP solution, brute force TC - O(n^2) Sc - O(1)
string longestPalindrome(string s) {
        int start = 0;
        int maxlen = 1;
        for(int i = 0 ; i<s.length()-1; i++){
            // for even indexes 
            int left = i;
            int right = i+1;
            while(left>=0 && right<=s.length()-1 && s[left] == s[right]){
                if(right - left + 1 > maxlen){
                    maxlen = right - left + 1;
                    start = left;
                }
                //expanding the substring by decrease left and increase right
                left--;
                right++;
            }
            // for odd indexes
            left = i-1;
            right = i+1;
            while(left>=0 && right <= s.length()-1  && s[left] == s[right]){
                if (right - left + 1> maxlen) {
                    maxlen = right - left + 1;
                    start = left;
                }
                left--;
                right++;
            }

        }
        return s.substr(start, maxlen);
    }
