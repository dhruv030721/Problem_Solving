#include<bits/stdc++.h>
using namespace std;

int maxRotateFunction(vector<int>& v, int n)
{
    priority_queue<int> maxi;
    vector<int> v1;
    for (int i = 0; i < n; i++)
    {
        int temp_sum = 0;
        for (int j = 0; j < n; j++)
        {
            temp_sum += v[j] * j;
            v1[((j+1)%n)] = v[j];
        }
        maxi.push(temp_sum);
        v = v1;
    }
    return maxi.top();
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
    
    cout << maxRotateFunction(v,n);
}
