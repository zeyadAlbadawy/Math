class Solution
{
public:
    bool isPerfectSquare(long int num)
    {
        bool final = false;

        for (long long int i = 0; i < 100000; i++)
        {
            if (i * i == num)
            {
                final = true;
                break;
            }

            else
                final = false;
        }

        return final;
    }
};

// https://leetcode.com/problems/valid-perfect-square/submissions/920783468/