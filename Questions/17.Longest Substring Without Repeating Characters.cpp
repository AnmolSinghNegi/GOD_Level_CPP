class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s=="") return 0;
        vector<int> count(128, 0);
        int max_len = 0;
        for (int left = 0, right = 0; right < s.size(); right++){
            count[s[right]]++;
            while (count[s[right]] > 1) {
                count[s[left++]]--;
            }
            max_len = max(max_len, right - left+1);
        }
        return max_len;
    }
};
