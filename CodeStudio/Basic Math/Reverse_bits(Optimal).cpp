long reverseBits(long n) {
    long result = 0;
    unsigned int one = 1;
    for(int i = 0; i < 32; i++)
    {
        long temp = 0;
        if(n > 0)
        {
            temp = n & 1;
            n = n >> 1;
        }
        if(temp == 1)
        {
            result = result | one << (31-i);
        }
    }
    return result;
}