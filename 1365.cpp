#include <iostream>
#include <string>
#include <cmath>
#include <vector>

using namespace std;

class Solution
{
public:
    vector<int> smallerNumbersThanCurrent(vector<int> &nums)
    {
        vector<int> ans;
        int size = nums.size();
        int count;

        for (int i = 0; i < size; ++i)
        {
            count = 0;

            for (int j = 0; j < size; ++j)
            {
                if (i != j && nums.at(i) > nums.at(j))
                    count++;
            }

            ans.push_back(count);
        }

        return ans;
    }
};

int main()
{
    vector<int> nums;
    int n, x;

    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        cin >> x;
        nums.push_back(x);
    }

    Solution s;
    nums = s.smallerNumbersThanCurrent(nums);

    for (int &i : nums)
        cout << i << " ";
    cout << endl;

    return 0;
}
