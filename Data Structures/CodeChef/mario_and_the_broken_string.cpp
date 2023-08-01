#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<char> s;
        int n;
        cin >> n;
        int temp=0; 
        for (int i = 0; i < n; i++)
        {
            char c;
            cin >> c;

            s.push_back(c);
        }
        for (auto i = 0; i < n/2; i++)
        {
            if(s[i]==s[i+n/2])
            {
                temp++;
            }
        }
        if(temp==n/2)
        cout << "YES";
        else
        cout << "NO";
    }
    return 0;
}
