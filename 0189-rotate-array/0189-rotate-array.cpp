class Solution {
public:
    void rotateHelper(vector<int>& nums, int start, int end){
        while(start<end){
            swap(nums[start],nums[end]);
            start++;
            end--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        rotateHelper(nums,0,n-1);
        rotateHelper(nums,0,k-1);
        rotateHelper(nums,k,n-1);
    }
};