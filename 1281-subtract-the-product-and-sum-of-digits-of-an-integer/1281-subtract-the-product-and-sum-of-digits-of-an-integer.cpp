class Solution {
public:
    int subtractProductAndSum(int n) {
        int a = 1, b = 0;
        for (int temp; n; n /= 10)
        {
            temp = n % 10;
            a *= temp;
            b += temp;
        }
        return a - b;
    }
};