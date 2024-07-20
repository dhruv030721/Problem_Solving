#include<bits/stdc++.h>
using namespace std;

int partition(int l, int h, vector<int> &v){
    int pivot = v[l];
    int i = l , j = h;
    while(i < j){
        while(v[i]<= pivot){
            i++;
        }
        while(v[j]> pivot){
            j--;
        }
        if(i < j){
            swap(v[i], v[j]);
        }
    }
    swap(v[l], v[j]);
    return j;
}


vector<int> QuickSort(int l,int h, vector<int> &v){
    if(l < h)
    {
        int j = partition(l,h,v);
        cout << j << " ";
        cout << endl; 
        QuickSort(l,j,v);
        QuickSort(j+1,h,v);
    }
    return v;
}

int main()
{
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    v  = QuickSort(0,n-1,v);
    for(auto i : v)
    {
        cout << i << " ";
    }
    return 0;
}