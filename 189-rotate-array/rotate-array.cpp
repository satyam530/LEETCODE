class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;

        // Step 1: Reverse first n-k elements
        reverse(nums.begin(), nums.begin() + (n-k));

        // Step 2: Reverse remaining k elements
        reverse(nums.begin() + (n-k), nums.end());

        // Step 3: Reverse the entire array
        reverse(nums.begin(), nums.end());
    }
};