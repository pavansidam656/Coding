class Solution {
public:
    bool isAnagram(string s, string t) {
        // Frequency counts of characters in both strings
        std::unordered_map<char, int> sFreq;
        std::unordered_map<char, int> tFreq;

        // Calculate frequency counts for string s
        for (char c : s) {
            sFreq[c]++;
        }

        // Calculate frequency counts for string t
        for (char c : t) {
            tFreq[c]++;
        }

        // Calculate the absolute difference in frequency counts
        int operations = 0;
        for (char c = 'a'; c <= 'z'; ++c) {
            operations += std::abs(sFreq[c] - tFreq[c]);
        }

        if(operations){
            return false;
        }
        else{
            return true;
        }
    }
};

