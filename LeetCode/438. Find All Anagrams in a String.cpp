class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>res;
        if(s.size()<p.size())return res;
        vector<int>p_count(26);
        vector<int>s_count(26);
        for(auto ch:p){
            p_count[ch-'a']++;
        }
        for(int i=0;i<p.size();i++){
            s_count[s[i]-'a']++;
        }
        for(int i=p.size();i<s.size();i++){
            if(p_count==s_count)res.push_back(i-p.size());
            s_count[s[i]-'a']++;
            s_count[s[i-p.size()]-'a']--;
        }
        if(p_count==s_count)res.push_back(s.size()-p.size());
        return res;
    }
};