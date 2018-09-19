#include "LeetCode.hpp"

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        auto count = nums.size();
        m.reserve(count);
        for(auto i = 0; i < count; ++i){
            auto&& numsi = nums[i];
            auto itr = m.find(target - numsi);
            if(itr != m.end()){
                return {itr->second, i};
            }
            m[numsi] = i;
        }
        return {};
    }
};

TEST_CASE("Two Sum", "two-sum")
{
    Solution s;

    std::vector<int> v1{2, 7, 11, 15};
    CHECK( (s.twoSum(v1, 9) == std::vector<int>{0, 1}) );

    std::vector<int> v2{0, 4, 3, 0};
    CHECK( (s.twoSum(v2, 0) == std::vector<int>{0, 3}) );

    std::vector<int> v3{-3, 4, 3, 90};
    CHECK( (s.twoSum(v3, 0) == std::vector<int>{0, 2}) );
}