#include<iostream>

using namespace std;

int main()
{
    int a[5] = {1,4,3,3,1};
    int ans=0;
    for (int i = 0; i < 5; i++)
    {
        ans = ans ^ a[i];
    }
    cout << ans;
    
}