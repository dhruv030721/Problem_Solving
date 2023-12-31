class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size()-1;
        int count = 0;
        sort(nums.begin(),nums.end());
        while (left < right)
        {
            if(nums[left] + nums[right] < target)
            {
                count += (right - left);
                left++;
            }
            else{
                right--;
            }
        }
        return count;
    }
};