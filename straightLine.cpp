class Solution
{
public:
    bool checkStraightLine(vector<vector<int>> &coordinates)
    {

        int currYdiff, currXdiff;
        int xDiff = (coordinates[1][0] - coordinates[0][0]);
        int yDiff = (coordinates[1][1] - coordinates[0][1]);

        for (int i = 2; i < coordinates.size(); ++i)
        {
            currXdiff = (coordinates[i][0] - coordinates[i - 1][0]);
            currYdiff = (coordinates[i][1] - coordinates[i - 1][1]);

            if (xDiff * currYdiff != currXdiff * yDiff)
                return false;
        }

        return true;
    }
};

// https://leetcode.com/problems/check-if-it-is-a-straight-line/submissions/920115465/