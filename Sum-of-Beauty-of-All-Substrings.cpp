// TC - O(n^2) SC - O(1)
// each time i iterates the maxi , mini , and mpp of char,int resets and stores new values again and sum is added at each ith step
int beautySum(string s) {    
        int sum = 0;
        int n = s.length();
        for(int i = 0; i<n; i++){
            unordered_map<char,int> mpp;
            for(int j = i ; j<n ; j++){
                mpp[s[j]]++; // storing count of each character every time i iterates
                int maxi = INT_MIN, mini = INT_MAX;
                for(auto it: mpp){
                    maxi = max(maxi,it.second);
                    mini = min(mini,it.second);
                }
                sum += maxi - mini;
            }
        }
        return sum;
  }
