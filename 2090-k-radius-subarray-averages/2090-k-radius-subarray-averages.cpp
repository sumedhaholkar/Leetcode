class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n=nums.size();
        int windowsize=2*k+1;
        vector<int>ans(n,-1);
        if(n<windowsize)
        return ans;
        vector<long long>answer(n+1);
        for(int i=0;i<n;i++){
            answer[i+1]=answer[i]+nums[i];
        }
        for(int i=k;i+k<n;++i){
            ans[i]=(answer[i+k+1]-answer[i-k])/windowsize;
        }
        return ans;
    }
};