class Solution {
public:

    inline int sum(int n)
    {
        return n * (n + 1) / 2;
    }

    int pivotInteger(int n) {
        for (int i = 1; i <= n; ++i)
        {
            if (sum(i) == sum(n) - sum(i - 1))
                return i;
        }
        return -1;
        
    }
};