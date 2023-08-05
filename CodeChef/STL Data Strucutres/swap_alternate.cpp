#include <iostream>
using namespace std;

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void swapAlternate(int arr[], int n)
{
    for (int i = 0; i < n; i += 2)
    {
        if (i + 1 < n)
        {
            int temp;
            temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
        display(arr,n);
}

int main()
{
    int n;
    cin >> n;
    // Here declaring the array by give this type of value is not approprite so use dynamic memory allocation for it
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    swapAlternate(a,n);
}