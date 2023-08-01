#include<iostream>
using namespace std;

int BinarySearch(int a[5], int k ,int size)
{
    int s = 0, e = size-1;
    int mid = s + (e - s)/2;
    while (s<=e)
    {
        if (a[mid]==k)
        {
            return mid;
        }
        if(k < a[mid])
        {
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
        mid = s + (e - s)/2;
    }
    return -1;

}

int main()
{
    int a[5] = {1,2,3,4,5};
    int ans = BinarySearch(a,4,5);
    cout << ans;
    return 0;
} 