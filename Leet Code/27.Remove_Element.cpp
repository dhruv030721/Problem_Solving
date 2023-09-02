class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        map<int, int> freq;
        freq[val] = 0;
        int size = nums.size();
        vector<int> temp;
        for (int i = 0; i < size; i++)
        {
            if(nums[i] == val)
            freq[val]++;
            else
            temp.push_back(nums[i]);
        }
        nums = temp;
        return size - freq[val];
    }
};