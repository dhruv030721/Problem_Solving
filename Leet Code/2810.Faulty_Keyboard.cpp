#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    vector<char> s1;
    int pointer = 0;
    while(pointer < s.length())
    {
        if(s.at(pointer) == 'i')
        {
            reverse(s1.begin(),s1.end());
        }
        else{
            s1.push_back(s.at(pointer));
        }
        pointer++;
    }
    string ans(s1.begin(),s1.end());
    cout << ans;
    
    return 0;
}