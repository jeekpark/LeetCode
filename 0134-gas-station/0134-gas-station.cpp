class Solution
{
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost)
    {
        static int aa = 0;
        if (i == 0)
        {
            ios_base::sync_with_stdio(false);
            cin.tie(NULL);
            ++aa;
        }
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

