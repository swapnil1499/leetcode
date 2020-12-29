//
// Created by Swapnil Patel on 2020-12-28.
//

#include <iostream>
#include <limits.h>

using namespace std;

class Solution {
public:
    int myAtoi(string s) {
        int i;
        int x = 0;
        int sign = 1;
        for (i = 0; i < s.length(); i++) {
            if (s[i] != ' ')
                break;
        }
        if (s[i] == '-') {
            sign = -1;
            i += 1;
        } else if (s[i] == '+') {
            sign = 1;
            i += 1;
        }

        for (; i < s.length(); i++) {
            if (isdigit(s[i])) {

                if (isOverflow(x, (s[i] - '0'))) {
                    if (sign > 0)
                        return INT_MAX;
                    else
                        return INT_MIN;
                }
                x = x * 10 + (int) (s[i] - '0');

            } else
                return sign * x;
        }

        return sign * x;
    }

private:
    bool isOverflow(int a, int b) {
        // Check if either of them is zero
        long long temp = (long long) a * 10 + b;

        if (temp > (long long) INT_MAX || temp < (long long) INT_MIN)
            return 1;
        else
            return 0;

    }
};

int main() {
    string s = "42";

    Solution solve;
    std::cout << solve.myAtoi(s);
    return 0;
}