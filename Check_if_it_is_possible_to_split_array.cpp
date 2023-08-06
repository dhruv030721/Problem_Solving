#include<bits/stdc++.h>
using namespace std;

bool conditionone(vector<int>& nums, int n, int m)
{
    int i = 0;
    while(i < n-1)
    {
        
        if(nums[i] + nums[i+1] >= m)
        {
            return true;
        }
        else
        {
            i++;
            // j++;
        }
    }

    return false;
}



int main()
{
    int n;
    cin >> n;
    vector<int> nums;
    int m;
    cin >> m;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        nums.push_back(temp);
    }
    cout << Check(nums, n, m);
}