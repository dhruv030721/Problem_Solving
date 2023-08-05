#include<iostream>
#include<math.h>
using namespace std;


int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int n;
        cin >> n;
        n = 8 *(n+1);
        n = sqrt(n);
        cout << (n-1)/2 << endl;
    }
}