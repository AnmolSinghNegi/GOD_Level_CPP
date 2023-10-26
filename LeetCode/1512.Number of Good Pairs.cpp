class Solution {
    public:
   int numIdenticalPairs(vector<int>& nums) {
     unordered_map<int,int>mpp;
     for(auto i:nums)mpp[i]++;
     int ans=0;
     for(auto a :mpp){
       int n = a.second;
       ans+=n*(n-1)/2;
     }
     return ans;
   }
};