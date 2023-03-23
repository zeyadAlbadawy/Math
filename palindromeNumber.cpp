class Solution
{
public:
    bool isPalindrome(int x)
    {
        bool final = false;
        string y = to_string(x);
        if (y.size() == 1)
            return true;
        int s1 = 0, s2 = y.size() - 1;

        for (s1, s2; s1 < s2; s1++, s2--)
        {
            if (y[s1] == y[s2])
            {
                final = true;
            }
            else
            {
                final = false;
                break;
            }
        }

        return final;
    }
};

// https://leetcode.com/submissions/detail/918082687/
