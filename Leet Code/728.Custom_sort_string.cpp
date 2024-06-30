class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char, int> hash_table;
        string result;
        for (auto i : s) {
            hash_table[i]++;
        }
        for (auto i : order) {
            while (hash_table[i] > 0) {
                result.push_back(i);
                hash_table[i]--;
            }
        }
        for (auto i : s) {
            if (hash_table[i] != 0) {
                result.push_back(i);
            }
        }
        return result;
    }
};