class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        string ans = "";
        int n = words.size();
        for (int i = 0; i < n; i++)
        {
            ans.append(1,words[i].at(0));
        }
        return ans == s;
    }
};