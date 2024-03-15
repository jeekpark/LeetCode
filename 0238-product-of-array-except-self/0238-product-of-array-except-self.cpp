class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int totalProduct = 1;
        int zeroCount = 0;
        for (int i = 0; i < nums.size(); ++i)
        {
            if (nums[i]) totalProduct *= nums[i];
            else ++zeroCount;
        }
        if (zeroCount > 1)
        {
            for (int i = 0; i < nums.size(); ++i)
                nums[i] = 0;
            return nums;
        }
        for (int i = 0; i < nums.size(); ++i)
        {
            if (zeroCount)
            {
                if (nums[i]) nums[i] = 0;
                else nums[i] = totalProduct;
            }
            else
            {
                nums[i] = totalProduct / nums[i];
            }
        }
        return nums;
    }
};