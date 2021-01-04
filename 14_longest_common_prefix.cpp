//
// Created by spatel on 2021-01-04.
//

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string> &strs) {

        string lcp = "";

        if (strs.size() > 0)
            lcp = strs[0];

        for (int i = 0; i < strs.size(); i++) {
                lcp = commonPrefix(lcp, strs[i]);
        }
        return lcp;
    }

private:
    string commonPrefix(string str1, string str2) {

        string res = "";
        int n1 = str1.length();
        int n2 = str2.length();

        for (int i = 0; i < n1 && i < n2; i++) {
            if (str1[i] == str2[i])
                res.push_back(str1[i]);
            else
                break;
        }
        return res;
    }

};

int main() {
    vector<string> strs = {"flower", "flow", "flight"};

    Solution solve;

    std::cout << solve.longestCommonPrefix(strs);
    return 0;
}