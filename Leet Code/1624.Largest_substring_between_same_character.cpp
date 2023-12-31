class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        unordered_map<char, int> charIndex;
        int maxLen = -1;

        for (int i = 0; i < s.size(); ++i) {
            if (charIndex.find(s[i]) == charIndex.end()) {
                charIndex[s[i]] = i;
            } else {
                maxLen = max(maxLen, i - charIndex[s[i]] - 1);
            }
        }

        return maxLen;
    }
};
