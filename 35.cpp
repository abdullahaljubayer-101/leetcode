// --Abdullah Al Jubayer--
// ------20/02/2023------

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int searchInsert(vector<int> &nums, int target) {
        int f = 0, l = nums.size() - 1;
        while (f <= l) {
            int m = f + (l - f) / 2;
            if (nums.at(m) == target)
                return m;
            else if (nums.at(m) < target)
                f = m + 1;
            else
                l = m - 1;
        }
        return f;
    }
};

int main() {
    auto start = std::chrono::system_clock::now();
    // --code--
    
    vector<int> num{1,3,5,6};
    Solution s;
    cout << s.searchInsert(num, 2);
    
    // --code--
    auto end = chrono::system_clock::now();
    cout << endl << chrono::duration_cast<chrono::milliseconds>(end - start).count() << "ms";
    return 0;
}
