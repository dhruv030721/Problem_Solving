class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        vector<int> v(n);
        int i = 0;
        int start = 0;
        int end = n-1;
        while(start <= end)
        {
            if(nums[i] == 0)
            {
                v[end] = nums[i];
                end--;
                i++;
            }
            else
            {
                v[start] = nums[i];
                start++;
                i++;
            }
        }  
        nums = v; 
    }
};