class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0;
        vector<int> ans;
        for(int i = 0; i<n ; i++){
            for(int j = 0 ; j<n ; j++){
                if(nums[i]>nums[j] && i!=j){
                        cnt++;
                }                    
            }
            ans.push_back(cnt);
            cnt = 0;          
        }
        return ans;
        
    }
};
