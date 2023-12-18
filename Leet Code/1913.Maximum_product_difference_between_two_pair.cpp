class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());

        int max_product = nums[n-1] * nums[n-2];
        int min_product = nums[0] * nums[1];
        int max_product_diff = max_product - min_product;

        return max_product_diff;
    }
};