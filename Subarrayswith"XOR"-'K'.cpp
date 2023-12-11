int subarraysWithSumK(vector < int > a, int b) {
    int count = 0;
    unordered_map<int,int> mpp;
    int n = a.size();
    mpp[0] = 1;  // mpp[xr]++;
    int xr = 0;
    for(int i = 0;i<n; i++){
        xr = xr^a[i];
        // x is remaining front portion of the array x = xr^k
        int x = xr^b;

        count = count + mpp[x]; // if x is found in the hashmap, increase the 
                                // count value else, keep count as 0
        mpp[xr]++;  // add xr to the map each time; 
    }
    return count;
}
