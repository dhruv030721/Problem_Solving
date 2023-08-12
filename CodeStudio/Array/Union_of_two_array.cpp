#include <bits/stdc++.h>
using namespace std;

vector<int> union_of_array(vector<int> v1, int n, vector<int> v2, int m)
{
    vector<int> v;
    int i = 0;
    int j = 0;
    while (i < n || j < m)
    {
        if (v1[i] <= v2[j])
        {
            if (v.size() == 0 || v.back() != v1[i])
            {
                v.push_back(v1[i]);
            }
            i++;
        }
        else
        {
            if (v.size() == 0 || v.back() != v2[j])
            {
                v.push_back(v2[j]);
            }
                j++;
        }
    }
    while (i < n)
    {
        if (v.size() == 0 || v.back() != v1[i])
        {
            v.push_back(v1[i]);
        }   
        i++;
    }
    while (j < m)
    {
        if (v.size() == 0 || v.back() != v2[j])
        {
            v.push_back(v2[j]);
        }
        j++;
    }

    return v;
}

int main()
{
    int n;
    cin >> n;
    int m;
    cin >> m;
    vector<int> v1;
    vector<int> v2;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        v1.push_back(temp);
    }
    for (int i = 0; i < m; i++)
    {
        int temp;
        cin >> temp;
        v2.push_back(temp);
    }
    vector<int> ans = union_of_array(v1, n, v2, m);

    for (auto i : ans)
    {
        cout << i << " ";
    }
    return 0;
}