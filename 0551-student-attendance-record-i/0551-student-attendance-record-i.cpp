class Solution {
public:
    bool checkRecord(string s) {
        int countA = 0;
        int countL = 0; // Keep track of consecutive 'L' characters
        
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == 'A') {
                countA++;
                countL = 0; // Reset count of consecutive 'L' characters
            } else if (s[i] == 'L') {
                countL++;
                if (countL >= 3) {
                    return false; // More than two consecutive 'L' characters
                }
            } else {
                countL = 0; // Reset count of consecutive 'L' characters
            }
            
            if (countA > 1) {
                return false; // More than one 'A' found
            }
        }
        
        return true;
    }
};
