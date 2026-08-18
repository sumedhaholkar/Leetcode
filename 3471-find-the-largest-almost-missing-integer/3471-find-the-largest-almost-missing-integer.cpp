class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n=nums.size();
        int ans=-1;
        if(k==n){
        ans=*max_element(nums.begin(), nums.end());
        return ans;
        }
        int hash[51]={0};
        for(int i=0;i<n;i++){
            hash[nums[i]]++;
        }
        if (k==1){
        for(int i=50;i>=0;i--){
            if(hash[i]==1){
                ans=i;
                return i;
            }
        }
        return -1;
        }
            if(hash[nums[0]]==1)
            ans=max(ans,nums[0]);
            if(hash[nums[n-1]]==1)
            ans=max(ans,nums[n-1]);
        return ans;
    }
};