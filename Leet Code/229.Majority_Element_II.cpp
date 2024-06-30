class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int length = n/3;
        unordered_map<int, int> HashTable;
        vector<int> v;
        for(auto i : nums){
            HashTable[i]++;
        }

        for(auto i : HashTable){
            if(i.second > length){
                v.push_back(i.first);
            }
        }
        return v;
    }
};