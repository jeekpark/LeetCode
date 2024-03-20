class Solution {
public:
    int triangularSum(vector<int>& nums) {
        for (int offset = 1;  offset < nums.size(); ++offset)
            for (int i = 0; i < nums.size() - offset; ++i)
                nums[i] = (nums[i] + nums[i + 1]) % 10;
        return nums[0];
    }
};