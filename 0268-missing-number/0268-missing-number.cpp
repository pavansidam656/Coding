class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int N=nums.size();
        int sum=(N*(N+1))/2;
        int s=0;
        for(int i=0;i<N;i++){
            s+=nums[i];
        }
        return sum-s; 
    }
};