#include "LeetCode.hpp"

class Solution
{
  public:
    string longestCommonPrefix(vector<string> &strs)
    {
        string prefix;
        if (strs.empty())
        {
            return prefix;
        }
        auto &str0 = strs[0];
        if (strs.size() == 1)
        {
            return str0;
        }
        auto str0size = str0.size();
        auto strssize = strs.size();
        for (size_t i = 0; i < str0size; i++)
        {
            auto ch = str0[i];
            for (size_t j = 1; j < strssize; j++)
            {
                auto &strj = strs[j];
                if (i > strj.size() || (strj[i] != ch))
                {
                    return prefix;
                }
            }
            prefix.push_back(ch);
        }

        return prefix;
    }
};

TEST_CASE("Longest Common Prefix", "longest-common-prefix")
{
    Solution s;
    using tests = vector<pair<vector<string>, string>>;
    tests strs = {{{"flower", "flow", "flight"}, "fl"},
                  {{"dog", "racecar", "car"}, ""},
                  {{"dog"}, "dog"},
                  {{}, ""}};

    for (auto &p : strs)
    {
        CHECK(s.longestCommonPrefix(p.first) == p.second);
    }
}