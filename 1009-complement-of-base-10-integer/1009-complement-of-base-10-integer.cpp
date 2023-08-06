#include <cmath>

class Solution {
public:
    int bitwiseComplement(int n) {
        if (n == 0) {
            return 1; // Special case: the bitwise complement of 0 is 1
        }

        int ans = 0;
        int i = 0;
        while (n > 0) {
            int temp = n % 2;
            if (temp == 0) {
                ans += (1 << i); // Set the i-th bit of ans to 1
            }
            i++;
            n /= 2;
        }
        return ans;
    }
};
