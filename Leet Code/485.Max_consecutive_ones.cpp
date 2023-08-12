class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int ans = 0;
        int i = 0;
        int n = nums.size();
        while(i < n)
        {
            if(nums[i] == 1)
            {
                count++;
                if(ans < count){
                    ans = count;
                }
            }
            else
            {
                count = 0;
            }
            i++;
        }
        return ans;
    }
};