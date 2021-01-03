//
// Created by Swapnil Patel on 2021-01-03.
//

#include <iostream>
#include <vector>


using namespace std;

class Solution {
public:
    string intToRoman(int num) {

        string roman_num = "";
        int arabic[] = {1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000};
        string roman[] = {"I", "IV", "V", "IX", "X", "XL", "L", "XC", "C", "CD", "D", "CM", "M"};

        int i = sizeof(arabic) / sizeof(arabic[0]) - 1;
        while (num > 0) {
            int div = num / arabic[i];
            num = num % arabic[i];

            for (; div > 0; div--) {
                roman_num += roman[i];
            }
            i--;
        }

        return roman_num;
    }
};

int main() {
    int num = 2545;

    Solution solve;

    std::cout << solve.intToRoman(num);

    return 0;
}