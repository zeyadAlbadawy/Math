class Solution
{
public:
    int smallestEvenMultiple(int n)
    {

        if (n % 2 == 0)
        {
            return n;
        }
        else
        {
            return n * 2;
        }
    }
};

// https://leetcode.com/submissions/detail/917719754/