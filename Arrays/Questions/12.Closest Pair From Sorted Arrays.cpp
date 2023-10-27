class Solution {
public:
	int closestPair(vector<int>& nums1, vector<int>& nums2, int k) {
        int diff = INT_MAX, i = 0, j = nums2.size() - 1;
        while(i < nums1.size() && j >= 0){
            diff = min(abs(nums1[i] + nums2[j] - k), abs(diff));
            if(nums1[i] + nums2[j] < k) i++;
            else j--;
        }
        diff = abs(diff);
        return diff;
	}
};