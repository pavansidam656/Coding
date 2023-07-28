#include <algorithm>
#include <string>

class Solution {
public:
    bool helper(int i, int j, const std::string& s) {
        if (i >= j)
            return true;
        if (s[i] != s[j])
            return false;
        return helper(i + 1, j - 1, s);
    }

    bool isPalindrome(std::string s) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        s.erase(remove_if(s.begin(), s.end(), [](char c) { return !isalnum(c); }), s.end());
        int i = 0, j = s.size() - 1;
        return helper(i, j, s);
    }
};
