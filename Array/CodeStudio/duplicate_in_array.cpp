#include<bits/stdc++.h>

using namespace std;

int duplicate(vector<int> vec)
{
    int ans=0;
    for (int i = 0; i < vec.size(); i++)
    {
        ans = ans ^ vec[i];
    }
    for (int i = 1; i < vec.size(); i++)
    {
        ans = ans ^ i;
    }

    return ans;
}


int main()
{
    vector<int> vec;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        vec.push_back(x);
    }
    cout << duplicate(vec) << endl;
    return 0;
}