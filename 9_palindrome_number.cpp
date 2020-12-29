//
// Created by Swapnil Patel on 2020-12-28.
//

#include <iostream>

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 || (x % 10 == 0 && x != 0))
            return false;

        //int temp_x = x;
        int rev_x = 0;
        while (x > rev_x) {
            rev_x = rev_x * 10 + x % 10;
            x = x / 10;
        }

        if (rev_x == x || rev_x/10 == x)
            return true;
        else
            return false;
    }
};

int main(){

    int x = 10;

    Solution solve;
    std::cout << solve.isPalindrome(x);

}