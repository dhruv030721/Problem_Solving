#include <bits/stdc++.h>

using namespace std;

void printS(vector<int> v, vector<int> &ds, int n, int index, int s, int k)
{
    if (index == n)
    {
        if (s == k)
        {
            for (auto i : ds)
            {
                cout << i << " ";
            }
            cout << endl;
        }
        return;
    }

    ds.push_back(v[index]);
    s += v[index];
    printS(v, ds, n, index + 1, s, k);
    s -= v[index];
    ds.pop_back();
    printS(v, ds, n, index + 1, s, k);
}

int main()
{

    vector<int> arr = {1, 2, 3, 4, 5, 6};
    int n = arr.size();
    vector<int> ds;
    int k = 6;

    printS(arr, ds, n, 0, 0, k);

    return 0;
}