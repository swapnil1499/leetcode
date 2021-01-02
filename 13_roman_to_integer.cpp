//
// Created by Swapnil Patel on 2021-01-01.
//

#include <iostream>

using namespace std;

class Solution {
public:
    int romanToInt(string s) {

        int result = 0;
        for (int i = 0; i < s.length(); i++) {
            int curr = romanCharToInt(s[i]);

            if (i + 1 < s.length()) {
                int next = romanCharToInt(s[i + 1]);

                if (curr >= next)
                    result += curr;
                else {
                    result += next - curr;
                    i++;
                }
            } else
                result += curr;

        }
        return result;
    }

private:
    int romanCharToInt(char c) {
        if (c == 'I')
            return 1;
        else if (c == 'V')
            return 5;
        else if (c == 'X')
            return 10;
        else if (c == 'L')
            return 50;
        else if (c == 'C')
            return 100;
        else if (c == 'D')
            return 500;
        else if (c == 'M')
            return 1000;
        else
            return 0;
    }
};

int main() {

    string s = "IX";

    Solution solve;
    std::cout << solve.romanToInt(s);
    return 0;
}