#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target, int n) {
        int s = 0;
        int e = n-1;
        int mid = s  + (e-s)/2;
        while(s<=e)
        {
            if(nums[mid] == target)
            {
                return mid;
            }
            else if(nums[mid] < target)
            {
                s = mid + 1;
            }
            else{
                e = mid - 1;
            }
            mid = s + (e-s)/2;
        }
        return mid;
    }
};

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    int target;
    cin >> target;
    class Solution s;
    cout << s.searchInsert(v,target, n);
    return 0;
}