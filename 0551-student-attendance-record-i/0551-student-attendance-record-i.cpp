class Solution {
public:
    bool checkRecord(string s) {
        int aCount = 0, lCount = 0;
        
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'L') {
                lCount++;
                if (lCount > 2)
                    return false;
            } else {
                lCount = 0;
                if (s[i] == 'A')
                    aCount++;
                if (aCount > 1)
                    return false;
            }
        }
        
        return true;
    }
};