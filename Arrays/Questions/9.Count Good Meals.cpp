class Solution {
public:
	int countPairs(vector<int>& deliciousness) {
		unordered_map<int,int>mpp;
		long long ans=0;
		for(int x:deliciousness){
			for(int i=1;i<=(1<<22);i*=2){
				if(mpp.count(i-x))ans+=mpp[i-x];
			}
			mpp[x]++;
		}
		return ans%(int)(1e9+7);
	}
};