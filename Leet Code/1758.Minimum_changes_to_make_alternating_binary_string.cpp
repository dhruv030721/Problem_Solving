class Solution {
public:

int minOperations(string s)
{
    int count = 0;
    if(s[0] == '0')
    {
        for(int i = 0; i < s.size()/2; i++)
        {
            if(s[(2*i)+1] != '1'){
                s[(2*i)+1] = '1';
                count++;
            }
            if(s[(2*i)] != '0'){
                s[i] = '0';
                count++;
            }
        }
    }
    else{
        for(int i = 0; i < s.size()/2; i++)
        {
            if(s[(2*i)+1] != '0'){
                s[(2*i)+1] = '0';
                count++;
            }
            if(s[(2*i)] != '1'){
                s[i] = '1';
                count++;
            }
        }
    }
    return count;
}    
};