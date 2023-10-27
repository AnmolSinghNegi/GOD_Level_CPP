class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
       unordered_map<int,int>mpp;
       int ans=0;
       for(int i=0;i<nums.size();i++){
           int val1=mpp[nums[i]+k];
           int val2=mpp[nums[i]-k];
           ans+=val1+val2;
           mpp[nums[i]]++;
       }
       return ans;
    }
};