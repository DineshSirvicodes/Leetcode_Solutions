// TC - 0(n) for unordered Map , SC - O(1) best case , worst case - > O(n) , all characters are unique
class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mpp;// A map to get the frequency
        for(auto it:s){
            mpp[it]++;
            // tree -> (t-1, r-1,e-2)
        }
        vector<pair<int,char>> vs;// a pair of frequency and char
        for(auto it: mpp){
            vs.push_back({it.second,it.first});
            // vs => [1->t , 1->r , 2-> e]
        }
        sort(vs.begin(),vs.end(),greater<pair<int,char>>());// sorted the frequencies in descending order
        // greater<pair<int,char>>() does the sorting in reverse fashion
        // after sort => 2->e, 1-> t, 1-> r
        string ans = "";
        for(auto it : vs){
            ans.append(it.first,it.second);
            // ans => eetr
        }
        return ans;
    }
};
