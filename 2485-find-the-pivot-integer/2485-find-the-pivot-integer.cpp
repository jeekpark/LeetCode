class Solution {
public:

    inline int sum(int n)
    {
        return n * (n + 1) / 2;
    }

    int pivotInteger(int n) {
        const int totalSum = sum(n);
        int prevSum = 0;
        for (int i = 1; i <= n; ++i)
        {
            int temp = sum(i);
            if (temp == totalSum - prevSum)
                return i;
            prevSum = temp;
        }
        return -1;
        
    }
};