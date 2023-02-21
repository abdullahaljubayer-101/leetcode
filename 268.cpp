// --Abdullah Al Jubayer--
// ------21/02/2023------

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int missingNumber(vector<int> &nums) {
        sort(nums.begin(), nums.end());
        int i = 0, n = nums.size();
        while (i < n) {
            if (nums.at(i) != i)
                return i;
            ++i;
        }
        return i;
    }
};

int main() {
    auto start = std::chrono::system_clock::now();
    // --code--

    vector<int> num{9, 6, 4, 2, 3, 5, 7, 0, 1};
    Solution s;
    cout << s.missingNumber(num) << endl;

    // --code--
    auto end = chrono::system_clock::now();
    cout << endl << chrono::duration_cast<chrono::milliseconds>(end - start).count() << "ms";
    return 0;
}
