class Solution
{
public:
    int sumBase(int n, int k)
    {

        int i = 0, num = 0;
        while (n > 0)
        {
            num += (n % k) * pow(10, i);
            n = n / k;
            i++;
        }

        int sum = 0;
        string x = to_string(num);

        for (int j = 0; j < x.size(); j++)
            sum += x[j] - 48;

        return sum;
    }
};

// https://leetcode.com/problems/sum-of-digits-in-base-k/submissions/920792428/