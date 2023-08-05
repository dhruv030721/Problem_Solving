#include<iostream>
using namespace std;

int main()
{
    int a[5] = {6,17,3,5,10};
    for (int i = 1; i < 5; i++)
    {
        int temp = a[i];
        int j = i - 1;
        while (j >= 0)
        {
            if(a[j] > temp)
            {
                a[j+1] = a[j];
            }
            else{
                break;
            }
 
            cout << j << " ";
        }
        a[j+1] = temp; 
    }
    cout << endl;
    for(auto i : a)
    {
        cout << i << " ";
    }
    
}