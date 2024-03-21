// TC - O(n) SC - O(n)
// find the smallest MAX element with highest FReq, and smallest MIN element with min Freq
#include<bits/stdc++.h>
vector<int> getFrequencies(vector<int> &v) {
    unordered_map<int,int> mpp;
   for(int i = 0 ; i<v.size() ; i++){
       mpp[v[i]]++;
   }
   int maxFreq= INT_MIN;
    int minFreq = INT_MAX;
    int maxEle = 0, minEle = 0;
    for (auto it : mpp) {
        int count = it.second;
        int element = it.first;

        if(count > maxFreq){
            maxEle = element;
            maxFreq = count;     
        }
        if(count < minFreq){
            minEle = element;
            minFreq = count;
        }  
        // Find the smallest element with the lowest frequency
        if (count == minFreq && element < minEle) {
             minEle = element;
        }
        // Find the smallest element with the highest frequency
        if (count == maxFreq && element < maxEle) {
             maxEle = element;
        }
    }
    
    return {maxEle,minEle};
}
