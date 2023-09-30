
class Solution {
public:
    int getans(std::string s) {
        int sum = 0;
        for (int i = 0; i < s.length(); i++) {
            sum += s[i] - '0';
        }
        return sum;
    }

    int countSymmetricIntegers(int low, int high) {
        int ans = 0;

        while (low <= high) {
            std::string s = std::to_string(low);

            if (s.length() % 2 == 0) {
                int len = s.length();
                int half = len / 2;
                std::string left = s.substr(0, half);
                std::string right = s.substr(half, len);

                int sum = getans(left);
                int sum2 = getans(right);
                if (sum == sum2)
                    ans++;
            }
            low++;
        }

        return ans;
    }
};

