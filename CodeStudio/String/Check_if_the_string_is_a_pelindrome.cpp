#include <bits/stdc++.h> 

char toLower(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
    {
        return (ch - 'A') + 'a';
    }
    return ch;
}


bool checkPalindrome(string s)
{
    int st = 0;
    int length = s.length();
    int e = length - 1;
    while(st<=e)
    {
        while(st < length && !isalnum(s[st]))
        {
            st++;
        }
        while(e >= 0 && !isalnum(s[e]))
        {
            e--;
        }
        if(st < length && e >= 0 && toLower(s[st]) != toLower(s[e]))
        {
            return false;
        }
        st++;
        e--;
    }
    return true;
}