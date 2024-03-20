class Solution {
public:
    int subtractProductAndSum(int n) {
        int a = 1, b = 0;
        for (; n; n /= 10)
        {
            a *= n % 10;
            b += n % 10;
        }
        return a - b;
    }
};