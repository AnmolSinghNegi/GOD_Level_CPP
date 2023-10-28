class Solution {
public:
	int longestKSubstr(string s, int k) {
	 if (s.size() < k)
        return -1;
    vector<int> count(128, 0);
    int u = 0;
    int max_len = 0;
    for (auto &c : s) {
        if (count[c - 'a']++ == 0)
            u++;
    }
    if (u < k)
        return -1;
    fill(count.begin(), count.end(), 0);
    int left = 0, right = 0;
    u = 0;
    while (right < s.size()) {
        if (count[s[right++] - 'a']++ == 0)
            u++;

        while (u > k) {
            if (--count[s[left++] - 'a'] == 0)
                u--;
        }
        max_len = max(max_len, right - left);
    }
    return max_len;
}
};