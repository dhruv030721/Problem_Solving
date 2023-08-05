#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        vector<string> contest_code;
        int n,start38=0,ltime108=0;
        string strinput;
        cin >> n;
        for (int  i = 0; i < n; i++)
        {
            cin >> strinput;
            contest_code.push_back(strinput);
        }
        for (auto i = contest_code.begin(); i < contest_code.end(); i++)
        {
            if (*i == "START38")
                start38++;
            else
            ltime108++;
            
        }
        cout << start38 << " " << ltime108 << endl;
    }
}

