class Solution {
public:
    int numberOfMatches(int n) {
        int res = 0;
        while (n > 1)
        {
            res += n / 2;
            n = n / 2 + (n & 1 ? 1 : 0);
        }
        return res;
    }
};