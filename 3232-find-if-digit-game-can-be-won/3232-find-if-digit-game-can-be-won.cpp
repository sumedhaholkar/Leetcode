class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int sum=0;
        int double_digit=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<10)
            sum+=nums[i];
            if(nums[i]>=10)
            double_digit+=nums[i];
        }
        if(sum==double_digit)
        return false;
        else
        return true;
    }
};