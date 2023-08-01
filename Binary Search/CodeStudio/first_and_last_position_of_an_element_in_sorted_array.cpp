#include <bits/stdc++.h> 

int firstOccurance(vector<int> vec, int k, int n)
{
    int s=0, e=n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e)
    {
        if(vec[mid] == k)
        {
            ans = mid;
            e = mid - 1;
        }
        else if(k > vec[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}
int lastOccurance(vector<int> vec, int k, int n)
{
    int s=0, e=n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e)
    {
        if(vec[mid] == k)
        {
            ans = mid;
            s = mid + 1;
        }
        else if(k > vec[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}


pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    pair<int, int> p;
    p.first = firstOccurance(arr, k, n);
    p.second = lastOccurance(arr, k, n);

    return p;
}