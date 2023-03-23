class Solution
{
public:
    bool isPowerOfTwo(int n)
    {
        bool final = false;
        long long int x = 0;
        for (x = 0; x < 1000; x++)
        {
            if (pow(2, x) == n)
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

// https://leetcode.com/submissions/detail/918085746/