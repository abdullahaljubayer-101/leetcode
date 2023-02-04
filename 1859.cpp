// --Abdullah Al Jubayer--
// ------04/02/2023------

#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    string sortSentence(string s)
    {
        vector<string> word(10, "");
        for (int i = 0; i < s.length(); ++i)
        {
            string temp = "";
            while (!isdigit(s[i]))
            {
                temp.push_back(s[i]);
                ++i;
            }
            word[s[i] - '0'] = temp;
            ++i;
        }

        string ans = "";
        for (int i = 1; i < 10; ++i)
            if (word[i] != "")
            {
                ans += word[i];
                ans += " ";
            }
        ans.pop_back();

        return ans;
    }
};

int main()
{
    auto start = std::chrono::system_clock::now();

    // --code--
    string s = "Myself2 Me1 I4 and3";
    Solution solution;
    cout << solution.sortSentence(s) << endl;
    // --code--

    cout << "\n\n";
    auto end = chrono::system_clock::now();
    cout << chrono::duration_cast<chrono::milliseconds>(end - start).count() << "ms" << endl;
    return 0;
}
