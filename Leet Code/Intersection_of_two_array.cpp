#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
    {
        int ptr1 = 0;
        int ptr2 = 0;

        sort(nums1.begin(), nums1.end());

        sort(nums2.begin(), nums2.end());

        vector<int> intersection;

        while (ptr1 < nums1.size() && ptr2 < nums2.size())
        {
            cout << ptr1 << " " << ptr2 << endl;
            if (nums1[ptr1] == nums2[ptr2])
            {
                cout << ptr1 << " " << ptr2;
                intersection.push_back(nums1[ptr1]);
                ptr1++;
                ptr2++;
            }
            else if (nums1[ptr1] > nums2[ptr2])
            {
                ptr2++;
            }
            else
            {
                ptr1++;
            }
        }

        return intersection;
    }
};

int main()
{

    Solution s;
    vector<int> v1 = {1, 2, 2, 1};
    vector<int> v2 = {2, 2};

    s.intersect(v1, v2);

    return 0;
}