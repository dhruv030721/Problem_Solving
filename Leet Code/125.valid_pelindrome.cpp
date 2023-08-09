class Solution {
public:
    bool valid(char ch)
    {
        if((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9') || (ch >= 'A' &&        ch <= 'Z') )
        {
            return 1;
        }
        return 0;
    }
    
    char toLower(char ch)
    {
        if((ch >= 'A' && ch <= 'Z'))
        {
            return (ch - 'A') + 'a';
        }
        return ch; 
    }

    bool checkPelindrome(string s)
    {
        
        int st = 0;
        int e = s.length() - 1;
        while(st<=e)
        {
            if(s[st] != s[e])
            {
                return false;
            }
            else{
                st++;
                e--;
            }
        }
        return true;
    }



    bool isPalindrome(string s) {

        string temp = "";

        for(int i=0; i < s.length(); i++)
        {
            if(valid(s[i]))
            {
                temp.push_back(toLower(s[i]));
            }
        }

        return checkPelindrome(temp);
    }
};