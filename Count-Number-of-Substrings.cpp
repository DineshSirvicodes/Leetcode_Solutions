// Count with K different Characters TC - O(n^2) SC - O(1)
int countSubStrings(string str, int k) 
{
    int ans = 0;
    int n = str.length();
    
    for(int i = 0; i<n ; i++){
         // To hold the characters that are already in the substring
        int distVal[26] = {0};
        // For counting the characters already in the substring
        int count = 0;
        for(int j = i ; j<n ; j++){
            //If the character is not present in the substring then increase count and add in the array
            if(distVal[str[j] - 'a'] == 0){
                count++;
                distVal[str[j] - 'a']++;
            }
            //If the number of different characters in the substring is equal to k increase the count
            if(count == k){
                ans++;
            }
            if(count>k) break;
        }
    }
    return ans;
}
