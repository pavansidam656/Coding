class Solution {
public:
    int addDigits(int num) {
        int ans = 0;
        if (num == 0) return 0;

        while (num > 0) {
            int rem = num % 10;
            ans += rem;
            num /= 10;
        }

        // Check if the result is greater than 9
        if (ans > 9) {
            // If yes, recursively call addDigits on the new result
            return addDigits(ans);
        } else {
            // If no, return the result
            return ans;
        }
    }
};
