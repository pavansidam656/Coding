class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int, int> mp; // Fix the declaration of unordered_map
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }
        for (const auto& m : mp) { // Use const auto& to iterate over unordered_map
            if (m.second == 2) {
                ans.push_back(m.first);
            }
        }
        return ans;
    }
};
