class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> charCount;
        // Count the frequency of each character
        for (char c : s) {
            charCount[c]++;
        }

        // Sort the characters based on their frequencies in decreasing order
        sort(s.begin(), s.end(), [&](char a, char b) {
            return charCount[a] > charCount[b] || (charCount[a] == charCount[b] && a < b);
        });

        return s;
    }
};