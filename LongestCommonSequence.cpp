int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int longest = 1, count = 0 , lastSmaller = INT_MIN;
        for(int i = 0 ; i<n ; i++){
            if(nums[i]-1 == lastSmaller){
                count+=1;
                lastSmaller = nums[i];
            }
            else if(lastSmaller != nums[i]){
                count = 1;
                lastSmaller = nums[i];
            }
            longest = max(longest,count);
        }
        
        return longest;
}
