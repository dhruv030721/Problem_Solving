#include<bits/stdc++.h>
#include<math.h>
using namespace std;

long reverseBits(long n) {
    int r = 0;
    int bits[32] = {0};
    int add_pointer = 31;
    long reversed_bits = 0;
    int power = 0;
    while(n!=1)
    {
        bits[add_pointer] = n % 2;
        n = n / 2;
        add_pointer--;
    }
    bits[add_pointer] = 1;
    reverse(bits,bits+32);
    for(int i = 31; i >= 0; i--)
    {
        reversed_bits = reversed_bits + (bits[i] * pow(2,power));
        power++;
    }
    return reversed_bits;
}


int main()
{
    long n;
    cin >> n;
    cout << reverseBits(n);
}