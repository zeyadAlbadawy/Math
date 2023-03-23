class Solution
{
public:
#include <vector>
    int smallestRangeI(vector<int> &nums, int k)
    {
        vector<int> arr1;
        vector<int> arr2;
        vector<int> arr;

        sort(nums.begin(), nums.end());
        int num1 = nums[0];
        int n = nums.size() - 1;
        int num2 = nums[n];

        int z = 0;
        int final = 0;
        k++;
        while (k)
        {
            arr1.push_back(num1);
            arr2.push_back(num2);
            num1 += 1;
            num2 -= 1;
            k--;
        }

        int x = arr1.size();

        for (int j = 0; j < x; j++)
        {
            arr.push_back(abs(arr1[j] - arr2[j]));
        }

        map<int, int> mp;
        int maxIndex = 0;
        int index = 0;
        for (int j = 0; j < x; j++)
        {
            mp[arr1[j]]++;
            mp[arr2[j]]++;
        }
        for (int j = 0; j < x; j++)
        {
            if (mp[arr1[j]] > 1)
            {
                maxIndex = arr[j];
                index = 2;
            }
        }

        if (index > 1)
        {
            final = 0;
            return final;
        }
        else
        {
            int min = *min_element(arr.begin(), arr.end());
            return min;
        }
    }
};

// https://leetcode.com/submissions/detail/919734674/