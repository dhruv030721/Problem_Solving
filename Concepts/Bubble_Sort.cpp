// A sorting algorithm is said to be stable if two objects with equal keys appear in the same order in sorted output as they appear in the input data set

#include<iostream>
using namespace std;

int main()
{
    int a[6] = {10,1,7,6,14,9};
    for(int i = 1; i<6; i++)
    {
        bool isSwap = false;
        for(int j = 0; j < 6-i; j++)
        {
            if(a[j] > a[j+1])
            {
                swap(a[j], a[j+1]);
                isSwap = true;
            }
        }
        if(isSwap == false)
        break;
    }
    for(auto var : a)
    {
        cout << var << " ";   
    }
}