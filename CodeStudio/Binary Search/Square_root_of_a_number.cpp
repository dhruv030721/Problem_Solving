#include<iostream>
using namespace std;

long long int BinarySearch(int n)
{
    int s = 0;
    int e = n;
    long long int mid = s + (e-s)/2;
    long long int ans = -1;
    while(s<=e)
    {
        long long int square = mid * mid;
        if(square == n)
        {
            return mid;
        }
        else if(square < n)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;

}

int floorSqrt(int n)
{
    return BinarySearch(n);
}

double SqrtPrecision(int precision, int n)
{
    double factor=1;
    double ans = floorSqrt(n);
    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10;
        for (double j = ans; j*j<n; j+=factor)
        {
            ans = j;
        }
        
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    cout << SqrtPrecision(3,n);
}
