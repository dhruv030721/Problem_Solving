class Solution {
public:
    int maxScore(string s) {
        int score = 0;
        int str_len = s.size();
        vector<int> v;
         for (int i = 1; i < str_len; ++i) {  
        string left = s.substr(0, i);  
        string right = s.substr(i);    

        int left_count = count(left.begin(), left.end(), '0');
        int right_count = count(right.begin(), right.end(), '1');

        v.push_back(left_count + right_count);
    }
        sort(v.begin(), v.end());
        return v[v.size()-1];
    }
};