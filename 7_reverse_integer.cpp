//
// Created by Swapnil Patel on 2020-12-27.
//

#include <iostream>
#include <limits.h>

class Solution {
public:
    int reverse(int x) {
        int rev_x = 0;
        while (x != 0) {
            if (isOverflow(rev_x, 10))
                return 0;

            rev_x = rev_x * 10 + x % 10;
            x = x / 10;
        }
        return rev_x;
    }

private:
    bool isOverflow(int a, int b)
    {
        // Check if either of them is zero
        if (a == 0 || b == 0)
            return 0;

        long long temp = (long long) a * 10;

        if(temp > (long long) INT_MAX || temp < (long long) INT_MIN)
            return 1;
        else
            return 0;

    }
};

int main() {
    int x = 123;

    Solution solve;
    //std::cout << (964632435 * 10 == 964632435 * 10) << "\n\r";
    //std::cout << (964632435 == (964632435 * 10) / 10) << "\n\r";

    std::cout << solve.reverse(x);

    return 0;
}