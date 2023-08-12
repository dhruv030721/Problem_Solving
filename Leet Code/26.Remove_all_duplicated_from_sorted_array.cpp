#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> v, int n)
{
    if(n == 0 || n == 1)
    {
        return n;
    }   
    vector<int> temp(n);
    int j = 0;
    for (int i = 0; i < n-1; i++)
    {
        if(v[i] != v[i+1])
        {
            // cout << j << " ";
            temp[j++] = v[i];
        }
    }
    temp[j] = v[n-1];
    for(auto i : temp)
    {
        cout << i << " ";
    }
    for (int  i = 0; i < j; i++)
    {
        v[i] = temp[i];
        
    }
    return j;
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
    int size = removeDuplicates(v,n);
    // cout << size;
}