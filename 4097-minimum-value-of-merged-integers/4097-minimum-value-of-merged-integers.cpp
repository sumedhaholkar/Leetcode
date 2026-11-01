class Solution {
public:
    long long minMergedInteger(vector<int>& nums) {
    long long mini = LLONG_MAX;

    for (int i = 0; i < nums.size(); i += 2) {
        string str = to_string(nums[i]) + to_string(nums[i + 1]);

        long long sol = stoll(str);

        mini = min(mini, sol);
    }

    return mini;
}
};