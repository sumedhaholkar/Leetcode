class Solution {
public:
    vector<int> findIndices(vector<int>& nums, int indexDifference, int valueDifference) {
     vector<int> ans = {-1, -1};

    for (int i = 0; i < nums.size(); i++) {
        for (int j = i; j < nums.size(); j++) {
            if (abs(i - j) >= indexDifference &&
                abs(nums[i] - nums[j]) >= valueDifference) {
                
                return {i, j};
            }
        }
    }

    return ans;   
    }
};