class Solution {
    public:
   int findLargestElement(vector<int>& nums) {
     int largest=nums[0];
     for(int i=1;i<nums.size();i++){
       if(largest<nums[i]){
         largest=nums[i];
       }
     }
     return largest;
   }
};