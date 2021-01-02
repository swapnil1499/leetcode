//
// Created by Swapnil Patel on 2021-01-01.
//

#include <iostream>

using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {

        if (numRows == 1)
            return s;

        string ans;
        int cycleLen = 2 * numRows - 2;

        for (int i = 0; i < numRows; i++) {
            for (int j = 0; (i + j) < s.length(); j += cycleLen) {
                ans += s[j + i];
                if (i != 0 && i != numRows - 1 && j + cycleLen - i < s.length())
                    ans += s[j + cycleLen - i];
            }
        }
        return ans;
    }
};

int main() {

    string s = "PAYPALISHIRING";
    int numRows = 4;

    Solution solve;

    std::cout << solve.convert(s, numRows);

    return 0;
}

