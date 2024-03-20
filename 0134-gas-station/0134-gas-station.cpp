class Solution
{
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost)
    {
        int totalGas = 0;
        int totalCost = 0;
        int currentGas = 0;
        int start = 0;
        for (size_t i = 0, len = gas.size(); i < len; ++i)
        {
            totalGas += gas[i];
            totalCost += cost[i];
            currentGas += gas[i] - cost[i];
            if (currentGas < 0)
            {
                start = i + 1;
                currentGas = 0;
            }
        }
        return totalGas - totalCost < 0 ? -1 : start;
    }
};

