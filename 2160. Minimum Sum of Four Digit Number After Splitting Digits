#include <iostream>
#include <string>
#include <cmath>
#include <vector>

using namespace std;

class Solution
{
public:
    int minimumSum(int num)
    {
        int n[5];
        int i = 0;
        int j;
        int t;

        while (num)
        {
            n[i++] = num % 10;
            num /= 10;
        }

        for (i = 0; i < 4; ++i)
            for (j = i + 1; j < 4; ++j)
                if (n[i] > n[j])
                {
                    t = n[i];
                    n[i] = n[j];
                    n[j] = t;
                }

        return (n[0] * 10 + n[2]) + (n[1] * 10 + n[3]);
    }
};

int main()
{
    int num;
    cin >> num;

    Solution s;
    cout << s.minimumSum(num) << endl;

    return 0;
}
