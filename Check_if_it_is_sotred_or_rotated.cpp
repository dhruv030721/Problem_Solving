#include<bits/stdc++.h>
using namespace std;

bool check(vector<int> v, int n)
{
    int count = 0;
    for (int i = 1; i < n; i++)
    {
        if(v[i-1] > v[i])
        {
            count++;
        }
    }
    if(v[n-1] > v[0])
    {
        count++;
    }
    return count<=1;
}

int main()  
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    cout << check(v,n);

    return 0;
}