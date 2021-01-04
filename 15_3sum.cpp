//
// Created by spatel on 2021-01-04.
//

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int> &nums) {
        vector<vector<int>> i = {{1, 2},
                                 {4, 5, 6}};
        return i;
    }
};

int main() {

    vector<int> nums = {-1, 0, 1, 2, -1, -4};

    Solution solve;
    vector<vector<int>> ans = solve.threeSum(nums);

    for (int i = 0; i < ans.size(); i++) {

        for (int j = 0; j < ans[i].size(); j++) {
            std::cout << ans[i][j] << " ";
        }
        std::cout << "\r\n";
    }
    return 0;
}