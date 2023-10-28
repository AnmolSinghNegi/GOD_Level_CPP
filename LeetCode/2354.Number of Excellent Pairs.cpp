class Solution {
  public:
   long countExcellentPairs(vector<int>&nums,int k) {
     long res =0;
     unordered_set<int>set;
     for(auto it:nums){
       set.insert(it);
      }
    vector<int>v;
    for(auto it:set){
      v.push_back(__builtin_popcount(it));
    }
    sort(v.begin(),v.end());
    int i=0,j=v.size()-1;
    while(i<j){
      if(v[i]+v[j]>=k){
        res += 2*(j-i);
        j--;
      }
      else{
        i++;
      }
    }
    for(int i=0;i<v.size();i++){
      if(2*v[i]>=k){
        res+=v.size()-i;
        break;
      }
    }
    return res;
  }
};