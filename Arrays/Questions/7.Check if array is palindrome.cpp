class Solution {
public:
    bool isPalindrome(vector<int>& nums) {
        int i=0;
        int j=nums.size()-1;
        while(i<j){
            if(nums[i]!=nums[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};