class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> count(26, 0);  // Assuming only lowercase English letters

        // Count occurrences of each character
        for (char c : s) {
            count[c - 'a']++;
        }

        // Find the first character with count 1
        for (int i = 0; i < s.size(); i++) {
            if (count[s[i] - 'a'] == 1) {
                return i;
            }
        }

        return -1; // No unique character found
    }
};
