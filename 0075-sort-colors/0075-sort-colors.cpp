class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int left=0,current=0,right=n-1;
        while(current<=right){
            if(nums[current]==0){
                swap(nums[left],nums[current]);
                left++;
                current++;
            }
            else if(nums[current]==1){
                current++;
            }
            else{
                swap(nums[current],nums[right]);
                right--;
            }
        }
    }
};