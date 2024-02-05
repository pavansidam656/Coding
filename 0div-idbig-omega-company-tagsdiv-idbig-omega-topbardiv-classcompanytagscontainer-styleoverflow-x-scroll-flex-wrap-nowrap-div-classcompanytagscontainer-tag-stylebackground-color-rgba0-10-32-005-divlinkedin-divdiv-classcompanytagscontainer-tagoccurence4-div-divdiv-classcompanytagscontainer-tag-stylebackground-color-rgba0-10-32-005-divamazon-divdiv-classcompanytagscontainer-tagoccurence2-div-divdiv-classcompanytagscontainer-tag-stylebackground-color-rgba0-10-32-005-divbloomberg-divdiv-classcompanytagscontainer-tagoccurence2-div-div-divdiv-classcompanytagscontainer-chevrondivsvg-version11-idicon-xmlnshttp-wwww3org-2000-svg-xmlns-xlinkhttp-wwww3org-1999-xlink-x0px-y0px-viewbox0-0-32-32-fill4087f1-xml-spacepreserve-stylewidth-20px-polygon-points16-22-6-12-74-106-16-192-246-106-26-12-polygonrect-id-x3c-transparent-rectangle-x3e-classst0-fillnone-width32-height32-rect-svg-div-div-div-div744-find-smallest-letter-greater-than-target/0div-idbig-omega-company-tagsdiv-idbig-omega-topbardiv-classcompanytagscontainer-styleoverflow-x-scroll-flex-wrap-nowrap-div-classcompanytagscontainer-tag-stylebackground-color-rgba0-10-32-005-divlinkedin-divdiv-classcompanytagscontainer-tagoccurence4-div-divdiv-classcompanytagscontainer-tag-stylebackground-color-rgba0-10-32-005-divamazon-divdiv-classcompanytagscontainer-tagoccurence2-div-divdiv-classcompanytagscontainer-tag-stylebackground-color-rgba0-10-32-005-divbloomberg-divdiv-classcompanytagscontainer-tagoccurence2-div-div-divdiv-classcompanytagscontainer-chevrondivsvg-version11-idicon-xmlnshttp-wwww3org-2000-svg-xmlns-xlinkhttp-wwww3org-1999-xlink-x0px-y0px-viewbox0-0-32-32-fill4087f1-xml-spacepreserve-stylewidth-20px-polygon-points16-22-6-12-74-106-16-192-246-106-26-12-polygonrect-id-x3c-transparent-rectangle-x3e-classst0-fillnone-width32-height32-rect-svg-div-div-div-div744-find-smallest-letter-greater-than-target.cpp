#include <vector>
using namespace std;

class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int start = 0, end = letters.size() - 1;

        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (letters[mid] <= target) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }

        // After the loop, 'start' is the position where the target should be inserted.
        // If 'start' is out of bounds, wrap around to the first letter.
        return start < letters.size() ? letters[start] : letters[0];
    }
};
