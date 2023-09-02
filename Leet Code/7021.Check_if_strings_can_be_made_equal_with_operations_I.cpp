
bool canBeEqual(string s1, string s2)
{
    int i = 0;
    if(s1 == s2)
    {
        return true;
    }
    else{
        for(int i = 0; i < 2; i++)
    {
        swap(s1.at(i), s1.at(i+2));
        if(s1 == s2)
        {
            return true;
        }
        swap(s1.at(i), s1.at(i+2));
    }
    for(int i = 0; i < 2; i++)
    {
        swap(s1.at(i), s1.at(i+2));
        if(s1 == s2)
        {
            return true;
        }
        // swap(s1.at(i), s1.at(i+2));
    }
    return false;
    }
    
}
