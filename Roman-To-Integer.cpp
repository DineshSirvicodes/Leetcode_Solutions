// TC - O(n)
int romanToInt(string s) {
        int res = 0;
        unordered_map<char,int> mpp{
            {'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}
        };
        for(int i = 0 ; i<s.length(); i++){
            if(mpp[s[i]]<mpp[s[i+1]]){
                res = res-mpp[s[i]]; // IV -> 1 < 5 -> res = 0 - 1 , 
                // then res = -1, s[i] = V goes to else and add 5 to -1 = 4           
            }
            else {
                res = res + mpp[s[i]];// if s[i+1]<s[i]-> VI = res = 5+1 = 6
            }
        }
        return res;
  }
