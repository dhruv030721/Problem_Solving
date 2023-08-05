#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> vec(n);
    int ans = 1e9;
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }
    for (int i = 0; i < n-1; i++)
    {
        if(vec[i+1]<vec[i])
        {
            cout << "0" << endl;
            return;
        }
        ans = min(ans, ((vec[i+1]-vec[i])/2)+1);
    }
    cout << ans << endl;
}


int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}