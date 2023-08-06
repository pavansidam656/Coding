#include <vector>
#include <algorithm>
#include <string>

class Solution {
public:
    bool isPalindrome(std::string s) {
        std::vector<char> v;
        for (int i = 0; i < s.size(); i++) {
            if (isalnum(s[i])) {
                char temp=tolower(s[i]);
                v.push_back(temp);
            }
        }

        // No need to create ans vector, use v directly
        std::vector<char> ans = v;

        reverse(v.begin(), v.end());
        for (int i = 0; i < v.size(); i++) {
            if (v[i] != ans[i])
                return false;
        }
        return true;
    }
};
