class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int hash[101]={0};
        for(int i=0;i<nums.size();i++){
            hash[nums[i]]++;
        }
        int ans;
        for(int i=k;i<101;i+=k){
            if(hash[i]==0){
                ans=i;
                break;
            }
        }
        return ans;

    }
};