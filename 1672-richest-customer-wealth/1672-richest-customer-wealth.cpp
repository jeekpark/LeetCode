class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int res = 0;
        for (vector<int>& v : accounts)
        {
            int sum = 0;
            for (int n : v) sum += n;
            res = sum > res ? sum : res;
        }
        return res;
    }
};