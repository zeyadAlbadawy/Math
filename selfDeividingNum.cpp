class Solution
{
public:
    vector<int> selfDividingNumbers(int left, int right)
    {
        vector<int> arr;
        bool final = false;

        while (left <= right)
        {
            string x = to_string(left);
            if (x.size() == 1 && left != 0)
            {
                arr.push_back(left);
            }
            else
            {

                for (int j = 0; j < x.size(); j++)
                {
                    int num = int(x[j]) - 48;
                    if ((num == 0) || left % num != 0)
                    {
                        final = false;
                        break;
                    }
                    else if (left % num == 0)
                        final = true;
                }

                if (final)
                {
                    arr.push_back(left);
                }
            }
            left++;
        }
        return arr;
    }
};

// https://leetcode.com/problems/self-dividing-numbers/submissions/919029683/