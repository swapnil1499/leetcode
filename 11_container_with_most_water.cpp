//
// Created by Swapnil Patel on 2021-01-01.
//

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int maxArea(vector<int> &height) {

        int area = 0;

        int first = 0;
        int last = height.size() - 1;

        while (first < last) {
            area = max(area, min(height[first], height[last]) * (last - first));

            if (height[first] < height[last])
                first++;
            else
                last--;
        }

        return area;
    }
};

int main() {


    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    Solution solve;
    std::cout << solve.maxArea(height);
    return 0;
}
