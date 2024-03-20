class Solution
{
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost)
    {
        int bal = 0, start = 0, total = 0;
        for(int i = 0, n = gas.size(); i< n; ++i)
        {
            bal += gas[i] - cost[i];
            if(bal < 0)
            {
                total += bal;
                start = i+1;
                bal = 0;
            }
        }
        return bal + total >= 0 ? start : -1;
    }
};

