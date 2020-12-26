//
// Created by Swapnil Patel on 2020-12-26.
//
#include <iostream>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        std::unordered_map<char, int> hashMap;
        int i = 0;
        int max_len = 0;
        for (int j = 0; j < s.length(); j++) {
            auto it = hashMap.find(s[j]);
            if (it != hashMap.end())
                i = max(hashMap[s[j]], i);

            max_len = max(max_len, j - i + 1);
            hashMap[s[j]] = j + 1;
        }
        return max_len;
    }
};

int main() {
    std::cout << "hello world\n\r";
    string s = "";

    Solution solve;

    std::cout << solve.lengthOfLongestSubstring(s);
    return 0;
}
