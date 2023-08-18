class Solution {
public:
    string interpret(string command) {
        string ans = "";
        for (int i = 0; i < command.size(); ++i) {
            if (command[i] == 'G') {
                ans += 'G';
            } else if (i + 1 < command.size() && command[i] == '(' && command[i + 1] == ')') {
                ans += 'o';
                ++i; // Skip the next character ')'
            } else if (i + 3 < command.size() && command[i] == '(' && command[i + 1] == 'a' && command[i + 2] == 'l' && command[i + 3] == ')') {
                ans += "al";
                i += 3; // Skip the next characters 'a', 'l', and ')'
            }
        }
        return ans;
    }
};
