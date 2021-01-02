#include <iostream>
#include <vector>
#include <unordered_map>

/*
 *
 */
class Solution
{
public:
    std::vector<int> twoSum(std::vector<int> &nums, int target)
    {
        std::unordered_map<int, int> hashMap;

        for (int i = 0; i < (int)nums.size(); i++)
        {
            auto it = hashMap.find(target - nums[i]);

            if (it == hashMap.end())
                hashMap[nums[i]] = i;
            else
                return std::vector<int>{i, it->second};
        }
        return std::vector<int>{0, 0};
    }
};

int main()
{
    std::vector<int> nums;
    int target;

    nums.push_back(2);
    nums.push_back(7);
    nums.push_back(11);
    nums.push_back(15);

    target = 13;

    Solution two_sum_Sol;

    std::vector<int> ans = two_sum_Sol.twoSum(nums, target);

    std::cout << "[" << ans[0] << "," << ans[1] << "]";

    return 0;
}
