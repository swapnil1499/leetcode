//
// Created by Swapnil Patel on 2020-12-29.
//

/*
 * Given a string s, return the longest palindromic substring in s.
 *
 */

#include <iostream>

using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {

        if (s.length() < 2)
            return s.substr(0, 1);

        int palindrome_length = 1;
        int index = 0;
        for (int i = 0; i < s.length(); i++) {
            //std::cout <<s[i] << s[i+1] << s[i+2];

            // Even Length Palindromes
            int j = i - 1;
            int k = i;

            while (j >= 0 && k <= s.length() && s[j] == s[k]) {
                if (k - j + 1 > palindrome_length) {
                    index = j;
                    palindrome_length = k - j + 1;
                }
                j--;
                k++;
            }


            // Odd Length Palindromes
            j = i - 1;
            k = i + 1;

            while (j >= 0 && k <= s.length() && s[j] == s[k]) {
                if (k - j + 1 > palindrome_length) {
                    index = j;
                    palindrome_length = k - j + 1;
                }
                j--;
                k++;
            }
        }
        return s.substr(index, palindrome_length);
    }
};

int main() {
    string s = "ac";

    Solution solve;

    std::cout << solve.longestPalindrome(s);
    return 0;
}