class Solution {
public:
    int peakValleyDifference(vector<int>& nums) {
        int sumpeak=0,sumvalley=0;
        for(int i=1;i<nums.size()-1;i++){
            if((nums[i]>nums[i-1]) && (nums[i]>nums[i+1]))
            sumpeak+=nums[i];
            if((nums[i]<nums[i-1]) && (nums[i]<nums[i+1]))
            sumvalley+=nums[i];
        }
        return (sumpeak-sumvalley);
    }
};