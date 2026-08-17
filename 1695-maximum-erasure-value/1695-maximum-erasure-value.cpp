class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
    int left=0;
    set<int>st;
    int sum=0,ans=0;
    for(int right=0;right<nums.size();right++){
        while(st.find(nums[right])!=st.end()){
            st.erase(nums[left]);
            sum-=nums[left];
            left++;
        }
        st.insert(nums[right]);
        sum+=nums[right];
        ans=max(ans,sum);
    }
    return ans;
    }
};