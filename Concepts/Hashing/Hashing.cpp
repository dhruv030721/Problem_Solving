#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int hash[12] = {0};
    int q;
    cin >> q;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] += 1;
    }
    // To print the hash array
    // for(auto i : hash)
    // {   
    //     cout << i << " ";
    // }
    while (q--)
    {
        int number;
        cin >> number;
        cout << hash[number] << endl;
    }
    return 0;
}