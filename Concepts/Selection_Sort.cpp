#include<iostream>
using namespace std;

int main()
{
    int a[5] = {36,6,334,647,34};
    for (int i = 0; i < 5; i++)
    {
        int minIndex = i;
        for (int j = i+1; j < 5; j++)
        {
            if(a[j] < a[minIndex])
            {
                minIndex = j;
            }
        }
        swap(a[minIndex],a[i]);
    }
    for(auto var : a)
    {
        cout << var << " ";      
    }
    return 0;
    
}