#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int r = 0;
    vector<int> v;
    while (n!=0)
    {
        r = n % 10;
        v.push_back(r);
        n = n / 10;
    }
    int s = v.size();
    reverse(v.begin(),v.end());
    for (int i = s-1; i > 0; i--)
    {
        if(v[i] >= 5)
        {
            v[i] = 0;
            cout << i << endl;
            cout << v[i] << endl;
        }
    }
    for(auto i : v)
    {
        cout << i << "";
    }
    
}